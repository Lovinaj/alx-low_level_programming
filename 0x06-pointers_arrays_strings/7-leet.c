#include "main.h"

/**
* leet - function that encodes a string into 1337
* letters  a and A are replaced by 4
* letters  e and E are replaced by 3
* letters  0 and O are replaced by 0
* letters  t and T are replaced by 7
* letters  l and L are replaced by 1
* @s: pointer to string
* Return: pointer to string
*/

char *leet(char *s)
{
/* i = string length, j = leet Count */
int i, j;
char leetletters[] = "aAeEoOtTlL";
char leetNums[] = "4433007711";

i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (leetletters[j] == s[i])
			{
				s[i] = leetNums[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
