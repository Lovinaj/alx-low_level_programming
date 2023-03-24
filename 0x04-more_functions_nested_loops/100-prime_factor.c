#include "main.h"
#include <stdio.h>

/**
* main - program that finds and prints the largest prime factor of the
* number 612852475143 followed by a new line
* Return: always 0
*/

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
