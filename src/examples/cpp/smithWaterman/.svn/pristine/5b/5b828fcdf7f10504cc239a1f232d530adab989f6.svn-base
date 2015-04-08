#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

#define GAP_PENALTY -1
#define TRANSITION_PENALTY -2
#define TRANSVERSION_PENALTY -4
#define MATCH 2

signed char* string_1;
signed char* string_2;

int tile_width;
int tile_height;

int n_tiles_x;
int n_tiles_y;

int ** tile_edges_x;
int ** tile_edges_y;
int * tile_diag;

int nthreads;
int *** worker_tiles;

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

int find_diag(int row, int col) {
	return (n_tiles_y - 1) + (col - row);
}

int main ( int argc, char* argv[] ) {
    int i, j;
	int nthreads = 1;

	if ( argc < 5 ) {
		fprintf(stderr, "Usage: %s fileName1 fileName2 tileWidth tileHeight\n", argv[0]);
		exit(1);
	}

	char* file_name_1 = argv[1];
	char* file_name_2 = argv[2];

    tile_width = (int) atoi (argv[3]);
    tile_height = (int) atoi (argv[4]);
	
	FILE* file_1 = fopen(file_name_1, "r");
	if (!file_1) { fprintf(stderr, "could not open file %s\n",file_name_1); exit(1); }
	size_t n_char_in_file_1 = 0;
	string_1 = read_file(file_1, &n_char_in_file_1);
	fprintf(stdout, "Size of input string 1 is %u\n", (unsigned)n_char_in_file_1 );
	
	FILE* file_2 = fopen(file_name_2, "r");
	if (!file_2) { fprintf(stderr, "could not open file %s\n",file_name_2); exit(1); }
	size_t n_char_in_file_2 = 0;
	string_2 = read_file(file_2, &n_char_in_file_2);
	fprintf(stdout, "Size of input string 2 is %u\n", (unsigned)n_char_in_file_2 );
	
	fprintf(stdout, "Tile width is %d\n", tile_width);
	fprintf(stdout, "Tile height is %d\n", tile_height);
	
	if (n_char_in_file_1 % tile_width)
		{ fprintf(stderr, "tile width does not evenly divide string1\n"); exit(1); }

	if (n_char_in_file_2 % tile_height)
		{ fprintf(stderr, "tile height does not evenly divide string2\n"); exit(1); }

	n_tiles_x = n_char_in_file_1/tile_width;
	n_tiles_y = n_char_in_file_2/tile_height;
	
	// Allocate space for edge data and diagonals
	tile_diag = (int*)malloc(sizeof(int)*(n_tiles_x + n_tiles_y - 1));

	tile_edges_x = (int**)malloc(sizeof(int*)*n_tiles_x);
	for (i = 0; i < n_tiles_x; i++) {
		tile_edges_x[i] = (int*)malloc(sizeof(int)*(tile_width));
		for (j = 0; j < tile_width; j++)
			tile_edges_x[i][j] = GAP_PENALTY*(i*tile_width+j);
		tile_diag[find_diag(0,i)] = GAP_PENALTY*(i*tile_width);
	}

	tile_edges_y = (int**)malloc(sizeof(int*)*n_tiles_y);
	for (i = 0; i < n_tiles_y; i++) {
		tile_edges_y[i] = (int*)malloc(sizeof(int)*(tile_height));
		for (j = 0; j < tile_height; j++)
			tile_edges_y[i][j] = GAP_PENALTY*(i*tile_height+j);
		tile_diag[find_diag(i,0)] = GAP_PENALTY*(i*tile_height);
	}

	worker_tiles = (int***)malloc(sizeof(int**)*nthreads);
	for (i = 0; i < nthreads; i++) {
		worker_tiles[i] = (int**)malloc(sizeof(int*)*(tile_height+1));
		for (j = 0; j < tile_height+1; j++)
			worker_tiles[i][j] = (int*)malloc(sizeof(int)*(tile_width+1));
	}

    struct timeval begin,end;
    gettimeofday(&begin,0);

	//finish {
		for ( i = 0; i < n_tiles_y; i++ ) {
			for ( j = 0; j < n_tiles_x; j++ ) {
				//async await
				{
					int ii, jj;
					int threadId = 0;
					int ** local_matrix = worker_tiles[threadId];
					int * tile_edge_x = tile_edges_x[j];
					int * tile_edge_y = tile_edges_y[i];
					int diag_index = find_diag(i,j);

                	for ( ii = 1; ii < tile_height+1; ++ii )
                    	local_matrix[ii][0] = tile_edge_y[ii-1];

                	for ( jj = 1; jj < tile_width+1; ++jj )
                    	local_matrix[0][jj] = tile_edge_x[jj-1];

                	local_matrix[0][0] = tile_diag[diag_index];

                	for ( ii = 1; ii < tile_height+1; ++ii ) {
                    	for ( jj = 1; jj < tile_width+1; ++jj ) {
                        	signed char char_from_1 = string_1[(j)*tile_width+jj-1];
                        	signed char char_from_2 = string_2[(i)*tile_height+ii-1];

                        	int diag_score = local_matrix[ii-1][jj-1] + alignment_score_matrix[char_from_2][char_from_1];
                        	int left_score = local_matrix[ii  ][jj-1] + alignment_score_matrix[char_from_1][GAP];
                        	int  top_score = local_matrix[ii-1][jj  ] + alignment_score_matrix[GAP][char_from_2];

                        	int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
                        	local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
                    	}
                	}

                	for ( ii = 1; ii < tile_height+1; ++ii )
                    	tile_edge_y[ii-1] = local_matrix[ii][tile_width];

                	for ( jj = 1; jj < tile_width+1; ++jj )
                    	tile_edge_x[jj-1] = local_matrix[tile_height][jj];

                	tile_diag[diag_index] = local_matrix[tile_height][tile_width];
				}
			}
		}
	//}

    gettimeofday(&end,0);
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);

	int diag_zero = find_diag(0,0);
    int score = tile_diag[diag_zero];
    fprintf(stdout, "score: %d\n", score);

	for (i = 0; i < n_tiles_x; i++)
		free(tile_edges_x[i]);
	free(tile_edges_x);

	for (i = 0; i < n_tiles_y; i++)
		free(tile_edges_y[i]);
	free(tile_edges_y);

	free(tile_diag);

	for (i = 0; i < nthreads; i++) {
		for (j = 0; j < tile_height+1; j++)
			free(worker_tiles[i][j]);
		free(worker_tiles[i]);
	}
	free(worker_tiles);

    return 0;
}

