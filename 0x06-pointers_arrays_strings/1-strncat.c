#include "holberton.h"
/**
*_strncat - 0
*@dest: string
*@src: string
*@n: int
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
