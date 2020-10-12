#include "holberton.h"
/**
*string_toupper - 0
*@r: string
*Return: string
*
*/
char *string_toupper(char *r)
{
	int i;

	i = 0;
	while (r[i] != '\0')
	{
		if (r[i] >= 'a' && r[i] <= 'z')
		{
			r[i] = r[i] - 'a' + 'A';
		}
		i++;
	}

	return (r);
}
