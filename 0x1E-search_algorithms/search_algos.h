#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_searchi(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

void print_array(int *array, size_t l, size_t r);
int binary_search_index1(int *array, size_t l, size_t r, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif	/* SEARCH_ALGOS_H */
