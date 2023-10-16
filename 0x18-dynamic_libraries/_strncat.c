#include "main.h"

/**
* _strncat -  function that concatenates two strings
* @dest: destination string
* @src: source string
* @n: number of character to be append
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int i;

while (dest[destlen] != '\0')
{
	destlen++;
}
for (i = 0; i < n &&  src[i] != '\0'; i++, destlen++)
{
	dest[destlen] = src[i];
}
dest[destlen] = '\0';
return (dest);
}
