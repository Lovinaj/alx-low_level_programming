#include "function_pointers.h"

/**
 * print_name- this functions prints a name
 *@name: string to print.
 *@f: function pointer
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
