#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include <time.h>
#ifdef __CHIMES_SUPPORT
#include "checkpoint.h"
#endif

#define GAP_PENALTY -1
#define TRANSITION_PENALTY -2
#define TRANSVERSION_PENALTY -4
#define MATCH 2

signed char* string_1;
signed char* string_2;

enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};

signed char char_mapping ( char c ) {
    signed char to_be_returned = -1;
    switch(c) {
        case '_': to_be_returned = GAP; break;
        case 'A': to_be_returned = ADENINE; break;
        case 'C': to_be_returned = CYTOSINE; break;
        case 'G': to_be_returned = GUANINE; break;
        case 'T': to_be_returned = THYMINE; break;
    }
    return to_be_returned;
}

void print_matrix ( int** matrix, int n_rows, int n_columns ) {
    int i, j;
    for ( i = 0; i < n_rows; ++i ) {
        for ( j = 0; j < n_columns; ++j ) {
            fprintf(stdout, "%d ", matrix[i][j]);
        }
        fprintf(stdout, "\n");
    }
    fprintf(stdout,"--------------------------------\n");
}

static char alignment_score_matrix[5][5] =
{
    {GAP_PENALTY,GAP_PENALTY,GAP_PENALTY,GAP_PENALTY,GAP_PENALTY},
    {GAP_PENALTY,MATCH,TRANSVERSION_PENALTY,TRANSITION_PENALTY,TRANSVERSION_PENALTY},
    {GAP_PENALTY,TRANSVERSION_PENALTY, MATCH,TRANSVERSION_PENALTY,TRANSITION_PENALTY},
    {GAP_PENALTY,TRANSITION_PENALTY,TRANSVERSION_PENALTY, MATCH,TRANSVERSION_PENALTY},
    {GAP_PENALTY,TRANSVERSION_PENALTY,TRANSITION_PENALTY,TRANSVERSION_PENALTY, MATCH}
};

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) {
    size_t non_ws_index = 0, traverse_index = 0;

    while ( traverse_index < size ) {
        char curr_char = buffer[traverse_index];
        switch ( curr_char ) {
            case 'A': case 'C': case 'G': case 'T':
                /*this used to be a copy not also does mapping*/
                buffer[non_ws_index++] = char_mapping(curr_char);
                break;
        }
        ++traverse_index;
    }
    return non_ws_index;
}

signed char* read_file( FILE* file, size_t* n_chars ) {
    fseek (file, 0L, SEEK_END);
    long file_size = ftell (file);
    fseek (file, 0L, SEEK_SET);

    signed char *file_buffer = (signed char *)malloc((1+file_size)*sizeof(signed char));

    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
    file_buffer[file_size] = '\n';

    /* shams' sample inputs have newlines in them */
    *n_chars = clear_whitespaces_do_mapping(file_buffer, file_size);
    return file_buffer;
}

static void random_init(signed char *s, unsigned long long len) {
    for (unsigned long long i = 0; i < len; i++) {
        int r = rand() % 5;
        assert(r >= 0 && r < 5);
        s[i] = r;
    }
}

void kernel(const unsigned long long c, const unsigned long long chunking, int *current,
        int *prev, unsigned long long n_char_in_file_1,
        unsigned long long n_char_in_file_2) {
    unsigned long long i, j;
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
        current[0] = GAP_PENALTY*i;
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
            signed char char_from_1 = string_1[j-1];
            signed char char_from_2 = string_2[i-1];

            int diag_score = prev[j-1] + alignment_score_matrix[char_from_2][char_from_1];
            int left_score = current[j-1] + alignment_score_matrix[char_from_1][GAP];
            int  top_score = prev[j  ] + alignment_score_matrix[GAP][char_from_2];

            int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
        }

        int *temp = prev;
        prev = current;
        current = temp;
    }
}

int main ( int argc, char* argv[] ) {
    int i, j;
	int *result_array[2];

	if ( argc != 4 ) {
		fprintf(stderr, "Usage: %s length1 length2 chunking\n", argv[0]);
		exit(1);
	}

    unsigned long long n_char_in_file_1 = strtoull(argv[1], NULL, 10);
    unsigned long long n_char_in_file_2 = strtoull(argv[2], NULL, 10);
    unsigned long long chunking = strtoull(argv[3], NULL, 10);
    assert(chunking % 2 == 0);

    if (n_char_in_file_2 % chunking != 0) {
        fprintf(stderr, "length2 (%llu) must be evenly divisible by chunking "
                "(%llu)\n", n_char_in_file_2, chunking);
        return 1;
    }
    printf("Processing length1=%llu length2=%llu\n", n_char_in_file_1,
            n_char_in_file_2);

    unsigned long long nchunks = n_char_in_file_2 / chunking;
    srand(123);

    string_1 = (signed char *)malloc(n_char_in_file_1);
    string_2 = (signed char *)malloc(n_char_in_file_2);
    random_init(string_1, n_char_in_file_1);
    random_init(string_2, n_char_in_file_2);

	result_array[0] = (int *)malloc(sizeof(int)*(n_char_in_file_1+1));
	result_array[1] = (int *)malloc(sizeof(int)*(n_char_in_file_1+1));

	int prev = 0;
	int current = 1;

    fprintf(stderr, "Starting...\n");
    struct timeval begin,end, intermediate;
    gettimeofday(&begin,0);

    for ( i = 0; i < n_char_in_file_1+1; ++i ) {
		result_array[prev][i] = GAP_PENALTY*i;
    }

    for (unsigned long long c = 0; c < nchunks; c++) {
        kernel(c, chunking, result_array[current], result_array[prev],
                n_char_in_file_1, n_char_in_file_2);

        gettimeofday(&intermediate, 0);
        unsigned long long elapsed = ((intermediate.tv_sec - begin.tv_sec) * 1000) +
            ((intermediate.tv_usec - begin.tv_usec) / 1000);
        unsigned long long estimate = elapsed / (c + 1);
        fprintf(stderr, "%llu / %llu: %llu ms elapsed, %llu estimated total\n",
                c + 1, nchunks, elapsed, estimate * nchunks);

#ifdef __CHIMES_SUPPORT
        checkpoint();
#endif
    }

    gettimeofday(&end,0);
    fprintf(stdout, "The computation took %f seconds\n",
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
	fprintf(stdout, "score: %d\n", result_array[prev][n_char_in_file_1]);
    return 0;
}

