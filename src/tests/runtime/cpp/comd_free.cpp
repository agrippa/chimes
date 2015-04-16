#include "checkpoint.h"

typedef struct _cell {
    int *nested;
} cell;

typedef struct _wrapper {
    cell *cells;
} wrapper;

cell *init_cells(int n_nested) {
    cell *cells = (cell *)malloc(sizeof(cell));
    cells->nested = (int *)malloc(n_nested * sizeof(int));
    return cells;
}

wrapper *init(int n_nested) {
    wrapper *wrap = (wrapper *)malloc(sizeof(wrapper));
    wrap->cells = init_cells(n_nested);
    return wrap;
}

void destroy_cells(cell *cell) {
    free(cell->nested);
    free(cell);
}

void destroy(wrapper *wrap) {
    destroy_cells(wrap->cells);
    free(wrap);
}

int main(int argc, char **argv) {
    wrapper *wrap = init(10);
    checkpoint();
    destroy(wrap);
    return 0;
}
