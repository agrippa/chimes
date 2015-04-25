#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <assert.h>
#include <omp.h>

#ifdef __CHIMES_SUPPORT
#include "checkpoint.h"
#endif

#define GAP_PENALTY -1
#define TRANSITION_PENALTY -2
#define TRANSVERSION_PENALTY -4
#define MATCH 2

#define DEBUG 0

#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MIN(a,b) (((a) < (b)) ? (a) : (b))

#define DIAG_INDEX(r,c) ((n_tiles_y - 1) + (c - r))
#define TILE GUID_DIAG

typedef struct _tile {
    int row;
    int col;
} tile;

typedef struct _tiles_to_run {
    tile *q;
    tile *base;
    int capacity;
    int length;
} tiles_to_run;

typedef enum {
	DIAG_KIND,
	RCOL_KIND,
	BROW_KIND,
	NUM_DEPS
} TILE_DEPS;

signed char* string_1;
signed char* string_2;

int strlen_1;
int strlen_2;

int tile_width;
int tile_height;

int n_tiles_x;
int n_tiles_y;

int ** tile_edges_x;
int ** tile_edges_y;
int * tile_diag;
int * put_counts;
int *** worker_tiles;
int * max_buffer;
int * temp_buffer;
int max_size;
volatile int done;

int nthreads;
struct timeval begin,end;

int dsizes[NUM_DEPS];

int GUID_DIAG(int r, int c) { return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
int GUID_RCOL(int r, int c) { return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
int GUID_BROW(int r, int c) { return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int TILE_ROW(int guid) { return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }
int TILE_COL(int guid) { return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }

int GUID_KIND(int guid) { return guid / (n_tiles_x * n_tiles_y); }

#if 0
//int DIST_HOME(int guid) { return ((guid % (n_tiles_x * n_tiles_y)) % comm_size); }
int DIST_HOME(int guid) { 
	int normalized_guid = guid % (n_tiles_x * n_tiles_y); // normalizes diag, brow, rcol guids
	int inner_r = normalized_guid / n_tiles_x;
	int inner_c = normalized_guid % n_tiles_x;
	if (inner_r == 0 || inner_c == 0) return comm_rank;
	int outer_r = (inner_r-1) / outer_tiles_length_y;
	int outer_c = (inner_c-1) / outer_tiles_length_x;
	int outer_guid = outer_r * n_outer_tiles_x + outer_c;
	return (outer_guid % comm_size); //block cyclic distribution
	//return (outer_c % comm_size); //column cyclic distribution
}
#endif

/*sagnak was here begin */
// #define DIST_HOME(guid) diagonal_cyclic_distribution_function(guid)
//#define DIST_HOME(guid) diagonal_block_cyclic_distribution_function(guid)
//#define DIST_HOME(guid) column_cyclic_distribution_function (guid)
//#define DIST_HOME(guid) row_cyclic_distribution_function (guid)

// static int column_cyclic_distribution_function ( int guid ) {
// 	int normalized_guid = guid % (n_tiles_x * n_tiles_y); // normalizes diag, brow, rcol guids
// 	int inner_r = normalized_guid / n_tiles_x;
// 	int inner_c = normalized_guid % n_tiles_x;
// 	if (inner_r == 0 || inner_c == 0) return comm_rank;
// 	int outer_r = (inner_r-1) / outer_tiles_length_y;
// 	int outer_c = (inner_c-1) / outer_tiles_length_x;
//     
//     int j = outer_c;
// 
//     return j % comm_size;
// }
// 
// static int row_cyclic_distribution_function ( int guid ) {
// 	int normalized_guid = guid % (n_tiles_x * n_tiles_y); // normalizes diag, brow, rcol guids
// 	int inner_r = normalized_guid / n_tiles_x;
// 	int inner_c = normalized_guid % n_tiles_x;
// 	if (inner_r == 0 || inner_c == 0) return comm_rank;
// 	int outer_r = (inner_r-1) / outer_tiles_length_y;
// 	int outer_c = (inner_c-1) / outer_tiles_length_x;
// 
//     int i = outer_r;
// 
//     return i % comm_size;
// }
// 
// static int diagonal_cyclic_distribution_function ( int guid ) {
// 	int normalized_guid = guid % (n_tiles_x * n_tiles_y); // normalizes diag, brow, rcol guids
// 	int inner_r = normalized_guid / n_tiles_x;
// 	int inner_c = normalized_guid % n_tiles_x;
// 	if (inner_r == 0 || inner_c == 0) return comm_rank;
// 	int outer_r = (inner_r-1) / outer_tiles_length_y;
// 	int outer_c = (inner_c-1) / outer_tiles_length_x;
//     
//     int i = outer_r;
//     int j = outer_c;
// 
//     int n_left_complete_diagonals = -1; 
//     int n_complete_diagonals = -1; 
//     int n_right_complete_diagonals = -1; 
//     int index_in_diagonal = -1; 
// 
//     int first_complete_diagonal_index = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_y - 1: n_outer_tiles_x - 1;
//     int last_complete_diagonal_index = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_x - 1 : n_outer_tiles_y - 1;
//     int diagonal_size = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_y : n_outer_tiles_x;
// 
//     int on_diagonal = i+j;
// 
//     if ( on_diagonal <= first_complete_diagonal_index ) { // on the top left corner or the first diagonal
//         n_left_complete_diagonals = i+j;
//         n_complete_diagonals = 0;
//         n_right_complete_diagonals = 0;
//         index_in_diagonal = i;
//     } else if ( on_diagonal <= last_complete_diagonal_index ) { // on the complete diagonals
//         n_left_complete_diagonals = first_complete_diagonal_index;
//         n_complete_diagonals = on_diagonal - first_complete_diagonal_index; // number of passed diagonals
//         n_right_complete_diagonals = 0;
//         index_in_diagonal = (n_outer_tiles_x > n_outer_tiles_y) ? i : i - n_complete_diagonals;
//     } else {
//         n_left_complete_diagonals = first_complete_diagonal_index;
//         n_complete_diagonals = last_complete_diagonal_index - first_complete_diagonal_index + 1; // number of passed diagonals
//         n_right_complete_diagonals = on_diagonal - last_complete_diagonal_index - 1;
//         index_in_diagonal = (n_outer_tiles_x > n_outer_tiles_y) ? i - (on_diagonal - last_complete_diagonal_index) : i - (on_diagonal - first_complete_diagonal_index); 
//     }   
// 
//     int offset_of_diagonal = ((n_left_complete_diagonals*(1+n_left_complete_diagonals))/2)
//         + diagonal_size*n_complete_diagonals
//         + ((diagonal_size-1)*diagonal_size)/2 - (((diagonal_size-n_right_complete_diagonals-1)*(diagonal_size-n_right_complete_diagonals))/2);
// 
//     return (offset_of_diagonal+index_in_diagonal) % comm_size;
// }
// 
// static int diagonal_block_cyclic_distribution_function ( int guid ) {
// 	int normalized_guid = guid % (n_tiles_x * n_tiles_y); // normalizes diag, brow, rcol guids
// 	int inner_r = normalized_guid / n_tiles_x;
// 	int inner_c = normalized_guid % n_tiles_x;
// 	if (inner_r == 0 || inner_c == 0) return comm_rank;
// 	int outer_r = (inner_r-1) / outer_tiles_length_y;
// 	int outer_c = (inner_c-1) / outer_tiles_length_x;
//     
//     int i = outer_r;
//     int j = outer_c;
// 
//     int index_in_diagonal = -1;
//     int curr_diag_size = -1;
//     int tiles_per_node = -1;
// 
//     int first_complete_diagonal_index = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_y - 1: n_outer_tiles_x - 1;
//     int last_complete_diagonal_index = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_x - 1 : n_outer_tiles_y - 1;
//     int max_diagonal_size = (n_outer_tiles_x > n_outer_tiles_y) ? n_outer_tiles_y : n_outer_tiles_x ;
// 
//     int on_diagonal = i+j;
// 
//     if ( on_diagonal <= first_complete_diagonal_index ) { // on the top left corner or the first diagonal
//         curr_diag_size = i+j+1;
//         index_in_diagonal = i;
//     } else if ( on_diagonal <= last_complete_diagonal_index ) { // on the complete diagonals
//         curr_diag_size = max_diagonal_size;
//         index_in_diagonal = (n_outer_tiles_x > n_outer_tiles_y) ? i : i - on_diagonal + n_outer_tiles_x - 1;
//     } else {
//         curr_diag_size = max_diagonal_size - (on_diagonal - last_complete_diagonal_index);
//         index_in_diagonal = (n_outer_tiles_x > n_outer_tiles_y) ? i - (on_diagonal - last_complete_diagonal_index) : i - on_diagonal + n_outer_tiles_x - 1 ;
//     }
// 
//     int per_node = curr_diag_size / comm_size;
//     int extra = curr_diag_size - per_node*comm_size;
//     int speculated = 0;
// 
//     if (per_node) {
//         speculated = -1;
//         while ( index_in_diagonal >= 0 ) {
//             index_in_diagonal -= per_node;
//             if ( extra > 0 ) { --extra; --index_in_diagonal; }
//             ++speculated;
//         }
//     } else {
//         speculated = index_in_diagonal;
//     }
//     return speculated;
// }

 
/*sagnak was here end*/

int PUT(int row, int col) {
	if (row > (n_tiles_y-1)) return 0;
	if (col > (n_tiles_x-1)) return 0;

	int success = 0;
	int await_tile = TILE(row,col); 

	{
		assert(put_counts[await_tile] < NUM_DEPS);
		put_counts[await_tile]++;
		if (put_counts[await_tile] == NUM_DEPS) {
			success = 1;
        }
	}
	return success;
}

int PUT_DIAG(int row, int col) { return PUT(row+1, col+1); }
int PUT_RCOL(int row, int col) { return PUT(row, col+1); }
int PUT_BROW(int row, int col) { return PUT(row+1, col); }

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

void add_tile_to_run(int row, int col, tiles_to_run *q) {
    assert(q->length < q->capacity);
    q->base[q->length].row = row;
    q->base[q->length].col = col;
    q->length = q->length + 1;
}

tile* pop_next_tile(tiles_to_run *q) {
    assert(q->length >= 0);
    if (q->length == 0) {
        return NULL;
    } else {
        tile *next = q->q;
        q->q = q->q + 1;
        q->length = q->length - 1;
        return next;
    }
}

void task_func(int i, int j, tiles_to_run *next) {
	int ii, jj;
	int threadId = omp_get_thread_num();
	int ** local_matrix = worker_tiles[threadId];

	int diag_index    = DIAG_INDEX(i,j);
	int * diag        = &tile_diag[diag_index]; 
	int * tile_edge_y =  tile_edges_y[i]; 
	int * tile_edge_x =  tile_edges_x[j]; 

	local_matrix[0][0] = *diag;

	for ( ii = 1; ii < tile_width+1; ++ii )
		local_matrix[0][ii] = tile_edge_x[ii-1];

	for ( ii = 1; ii < tile_height+1; ++ii )
		local_matrix[ii][0] = tile_edge_y[ii-1];

	for ( ii = 1; ii < tile_height+1; ++ii ) {
		for ( jj = 1; jj < tile_width+1; ++jj ) {
			signed char char_from_1 = string_1[(j-1)*tile_width+jj-1];
			signed char char_from_2 = string_2[(i-1)*tile_height+ii-1];

			int diag_score = local_matrix[ii-1][jj-1] + alignment_score_matrix[char_from_2][char_from_1];
			int left_score = local_matrix[ii  ][jj-1] + alignment_score_matrix[char_from_1][GAP];
			int  top_score = local_matrix[ii-1][jj  ] + alignment_score_matrix[GAP][char_from_2];

			int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
			local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
		}
	}

	*diag = local_matrix[tile_height][tile_width];
	for ( ii = 1; ii < tile_height+1; ++ii )
		tile_edge_y[ii-1] = local_matrix[ii][tile_width];
	for ( ii = 1; ii < tile_width+1; ++ii )
		tile_edge_x[ii-1] = local_matrix[tile_height][ii];

	if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
#pragma omp critical
        {
// #pragma omp flush
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
                int success = PUT_DIAG(i,j);
                if (success) {
                    int row = i + 1;
                    int col = j + 1;
                    add_tile_to_run(row, col, next);
                }
            }

            if ((j+1) < n_tiles_x) {
                int success = PUT_RCOL(i,j);
                if (success) {
                    int row = i;
                    int col = j + 1;
                    add_tile_to_run(row, col, next);
                }
            }

            if ((i+1) < n_tiles_y) {
                int success = PUT_BROW(i,j);
                if (success) {
                    int row = i + 1;
                    int col = j;
                    add_tile_to_run(row, col, next);
                }
            }
// #pragma omp flush
        }
	}

#if DEBUG > 1
	fprintf(stdout,"[%d] Done Tile[%d][%d] %d\n", comm_rank, i, j, local_matrix[tile_height][tile_width]);
#endif
}

int main ( int argc, char* argv[] ) { 
    int i, j, level;

#pragma omp parallel
	{
		nthreads = omp_get_num_threads();
	}

    if ( argc < 5 ) {
        fprintf(stderr, "Usage: %s fileName1 fileName2 tileWidth tileHeight\n", argv[0]);
        exit(1);
    }

    fprintf(stdout, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);

    char* file_name_1 = argv[1];
    char* file_name_2 = argv[2];

    tile_width = (int) atoi (argv[3]);
    tile_height = (int) atoi (argv[4]);

    FILE* file_1 = fopen(file_name_1, "r");
    if (!file_1) { fprintf(stderr, "could not open file \"%s\"\n",file_name_1); exit(1); }
    size_t n_char_in_file_1 = 0;
    string_1 = read_file(file_1, &n_char_in_file_1);
    fprintf(stdout, "Size of input string 1 is %u\n", (unsigned)n_char_in_file_1 );

    FILE* file_2 = fopen(file_name_2, "r");
    if (!file_2) { fprintf(stderr, "could not open file \"%s\"\n",file_name_2); exit(1); }
    size_t n_char_in_file_2 = 0;
    string_2 = read_file(file_2, &n_char_in_file_2);
    fprintf(stdout, "Size of input string 2 is %u\n", (unsigned)n_char_in_file_2 );

    fprintf(stdout, "Tile width  %d\n", tile_width);
    fprintf(stdout, "Tile height %d\n", tile_height);

    if (n_char_in_file_1 % tile_width) { fprintf(stderr, "String1 length should be multiple of tile width\n"); exit(1); }
    if (n_char_in_file_2 % tile_height) { fprintf(stderr, "String2 length should be multiple of tile height\n"); exit(1); }

    n_tiles_x = n_char_in_file_1/tile_width;
    n_tiles_y = n_char_in_file_2/tile_height;

    fprintf(stdout, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);

    strlen_1 = n_char_in_file_1;
    strlen_2 = n_char_in_file_2;
	
	// Allocate space for edge data and diagonals

	// Increase tile space to allocate for initial condition
	n_tiles_x++;
	n_tiles_y++;

	int num_tiles = n_tiles_x*n_tiles_y;
	put_counts = (int*)malloc(sizeof(int)*num_tiles);
	for (i=0; i<num_tiles; i++) {
		put_counts[i] = 0;
	}

	// Allocate space for diagonal puts
	int num_diags = n_tiles_x + n_tiles_y - 1;
	tile_diag = (int*)malloc(sizeof(int)*num_diags);
	tile_diag[DIAG_INDEX(0,0)] = 0;
	PUT_DIAG(0,0);

	for (i = 1; i < n_tiles_x; i++) {
		tile_diag[DIAG_INDEX(0,i)] = GAP_PENALTY*(i*tile_width);
		PUT_DIAG(0,i);
	}
	for (i = 1; i < n_tiles_y; i++) {
		tile_diag[DIAG_INDEX(i,0)] = GAP_PENALTY*(i*tile_height);
		PUT_DIAG(i,0);
	}

	// Allocate space for y puts
	tile_edges_y = (int**)malloc(sizeof(int*)*n_tiles_y);
	for (i = 1; i < n_tiles_y; i++) {
		tile_edges_y[i] = (int*)malloc(sizeof(int)*(tile_height));
		for (j = 0; j < tile_height; j++)
			tile_edges_y[i][j] = GAP_PENALTY*((i-1)*tile_height+j);
		PUT_RCOL(i,0);
	}

	// Allocate space for x puts
	tile_edges_x = (int**)malloc(sizeof(int*)*n_tiles_x);
	for (i = 1; i < n_tiles_x; i++) {
		tile_edges_x[i] = (int*)malloc(sizeof(int)*(tile_width));
		for (j = 0; j < tile_width; j++)
			tile_edges_x[i][j] = GAP_PENALTY*((i-1)*tile_width+j);
		PUT_BROW(0,i);
	}

	// Allocate working tile for each worker thread
	worker_tiles = (int***)malloc(sizeof(int**)*nthreads);
	for (i = 0; i < nthreads; i++) {
		worker_tiles[i] = (int**)malloc(sizeof(int*)*(tile_height+1));
		for (j = 0; j < tile_height+1; j++)
			worker_tiles[i][j] = (int*)malloc(sizeof(int)*(tile_width+1));
	}

	// Setup SIZE
	dsizes[DIAG_KIND] = 1;           //diag
	dsizes[RCOL_KIND] = tile_height; //right column
	dsizes[BROW_KIND] = tile_width;  //bottom row

	max_size = dsizes[0];
	for (i = 1; i < NUM_DEPS; i++)
		if (max_size < dsizes[i]) max_size = dsizes[i];
	max_buffer = (int*)malloc(sizeof(int)*max_size);
	temp_buffer = (int*)malloc(sizeof(int)*max_size);

	// Print 2-D matrix of tiles
#if DEBUG
    fprintf(stdout, "\nTile Matrix:\n\n     ");
    for ( j = 0; j < n_tiles_x; j++ )
        fprintf(stdout,"     %3d     ", j);
    fprintf(stdout,"\n     ");
    for ( j = 0; j < n_tiles_x; j++ )
        fprintf(stdout," ----------- ", j);
    fprintf(stdout,"\n\n");

	for ( i = 0; i < n_tiles_y; i++ ) {
        fprintf(stdout,"%3d |", i);
        for ( j = 0; j < n_tiles_x; j++ ) {
            int diag_guid = GUID_DIAG(i,j);
            int rcol_guid = GUID_RCOL(i,j);
            fprintf(stdout," [%4d %4d] ", DIST_HOME(diag_guid),rcol_guid);
        }
        fprintf(stdout,"\n     ");
        for ( j = 0; j < n_tiles_x; j++ ) {
            int diag_guid = GUID_DIAG(i,j);
            int brow_guid = GUID_BROW(i,j);
            fprintf(stdout," [%4d %4d] ", brow_guid,diag_guid);
        }
        fprintf(stdout,"\n\n");
	}
	fflush(stdout);
#endif

	int result_row = n_tiles_y - 1;
	int result_col = n_tiles_x - 1;
	done = 0;

    gettimeofday(&begin,0);

    tiles_to_run *curr = (tiles_to_run*)malloc(sizeof(tiles_to_run));
    curr->base = (tile *)malloc(sizeof(tile) * n_tiles_y * n_tiles_x);
    curr->q = curr->base;
    curr->capacity = n_tiles_y * n_tiles_x;
    curr->length = 1;
    (curr->base)[0].row = 1;
    (curr->base)[0].col = 1;

    tiles_to_run *next = (tiles_to_run*)malloc(sizeof(tiles_to_run));
    next->base = (tile *)malloc(sizeof(tile) * n_tiles_y * n_tiles_x);
    next->q = next->base;
    next->capacity = n_tiles_y * n_tiles_x;
    next->length = 0;

    while (curr->length > 0) {
        tile *mine = NULL;
#pragma omp parallel firstprivate(mine)
        {
            bool done = false;

            while (!done) {
#pragma omp critical
                {
                    mine = pop_next_tile(curr);
                }
                done = (mine == NULL);

                if (!done) {
                    task_func(mine->row, mine->col, next);
                }
            }
        }

        tiles_to_run *tmp = curr;
        curr = next;
        next = tmp;

        curr->q = curr->base;

        next->length = 0;

#ifdef __CHIMES_SUPPORT
        checkpoint();
#endif
    }

    gettimeofday(&end,0);
    int score = tile_diag[DIAG_INDEX(result_row,result_col)];
    fprintf(stdout, "score: %d\n", score);
    fprintf(stdout, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);

	for (i = 0; i < nthreads; i++) {
		for (j = 0; j < tile_height+1; j++)
			free(worker_tiles[i][j]);
		free(worker_tiles[i]);
	}
	free(worker_tiles);

	for (i = 1; i < n_tiles_y; i++)
		free(tile_edges_y[i]);
	free(tile_edges_y);

	for (i = 1; i < n_tiles_x; i++)
		free(tile_edges_x[i]);
	free(tile_edges_x);

	free(tile_diag);

	free(string_1);
	free(string_2);

    return 0;
}


