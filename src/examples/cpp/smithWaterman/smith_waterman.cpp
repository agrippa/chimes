#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <assert.h>

#ifdef __CHIMES_SUPPORT
#include "checkpoint.h"
#endif

#define GAP_PENALTY -1
#define TRANSITION_PENALTY -2
#define TRANSVERSION_PENALTY -4
#define MATCH 2

#define INDEX(row, col, ncols) ((row) * (ncols) + (col))

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

int main ( int argc, char* argv[] ) {
    unsigned long long i, j;
	int nthreads = 1;

	if ( argc < 3 ) {
        fprintf(stderr, "Usage: %s length1 length2\n", argv[0]);
		exit(1);
	}

    unsigned long long length1 = strtoull(argv[1], NULL, 10);
    unsigned long long length2 = strtoull(argv[2], NULL, 10);

    unsigned long long n_char_in_file_1 = length1;
    unsigned long long n_char_in_file_2 = length2;

    string_1 = (signed char *)malloc(n_char_in_file_1);
    string_2 = (signed char *)malloc(n_char_in_file_2);

    srand(123);
    random_init(string_1, n_char_in_file_1);
    random_init(string_2, n_char_in_file_2);
    fprintf(stdout, "Working on matrix of size %llu x %llu\n",
            n_char_in_file_1, n_char_in_file_2);

    int **matrix = (int **)malloc(sizeof(int *) * (n_char_in_file_1 + 1));
    assert(matrix);
    for (unsigned long long i = 0; i < n_char_in_file_1 + 1; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * (n_char_in_file_2 + 1));
        assert(matrix[i]);
    }

    for (i = 0; i < n_char_in_file_2 + 1; i++) {
        matrix[0][i] = GAP_PENALTY * (i);
    }
    for (i = 0; i < n_char_in_file_1 + 1; i++) {
        matrix[i][0] = GAP_PENALTY * (i * n_char_in_file_2);
    }
	
    struct timeval begin,end;
    gettimeofday(&begin,0);

    for (i = 1; i < n_char_in_file_1 + 1; i++) {
        for (j = 1; j < n_char_in_file_2 + 1; j++) {
            signed char char_from_1 = string_1[i - 1];
            signed char char_from_2 = string_2[j - 1];

            int diag_score = matrix[i - 1][j - 1] +
                alignment_score_matrix[char_from_2][char_from_1];
            int left_score = matrix[i][j - 1] +
                alignment_score_matrix[char_from_1][GAP];
            int top_score = matrix[i - 1][j] +
                alignment_score_matrix[GAP][char_from_2];

            int bigger_of_left_top = (left_score > top_score) ? left_score :
                top_score;
            matrix[i][j] = (bigger_of_left_top > diag_score) ?
                bigger_of_left_top : diag_score;
        }
#ifdef __CHIMES_SUPPORT
        checkpoint();
#endif
    }

    gettimeofday(&end,0);
    fprintf(stdout, "The computation took %f seconds\n",
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*
            1.0/1000000);

    int score = matrix[n_char_in_file_1][n_char_in_file_2];
    fprintf(stdout, "score: %d\n", score);

    for (unsigned long long i = 0; i < n_char_in_file_1 + 1; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

