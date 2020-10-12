#include "holberton.h"
/**
*_strcat - 0
*@dest: string
*@src: string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[0];
	j = 1;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 2] = '\0';
	return (dest);
}
