#include "holberton.h"
/**
*string_toupper - 0
*@r: string
*Return: string
*
*/
char *string_toupper(char *r)
{
	int j;

	j = 0;
	while (r[j] != '\0')
	{
		if (r[j] >= 'a' && r[j] <= 'z')
		{
			r[j] = r[j] - 'a' + 'A';
		}
		i++;
	}

	return (r);
}
