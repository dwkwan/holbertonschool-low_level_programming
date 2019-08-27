#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recur(int *array, size_t start, size_t end, int value);

#endif /* SEARCH_ALGOS_H */
