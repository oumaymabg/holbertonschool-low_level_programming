#include "holberton.h"
/**
*_strcmp - 0
*@s1: string
*@s2: string
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int j, i;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	while (s1[j] == s2[j] && j < i)
	{
		j++;
	}

	return (s1[j] - s2[j]);
}
