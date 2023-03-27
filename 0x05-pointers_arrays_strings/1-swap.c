#include"main.h"

/**
* swap_int - function that swaps the values of two integers
* @a: swaps and store address b
* @b: swaps and store address a
* Return: 0
*/

void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
