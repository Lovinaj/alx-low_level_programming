#include "main.h"

/**
* _puts - function that print a string
* @str: string pointer
* Return: string and new year
*/

void _puts(char *str)
{
int i = 0;

while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
