#include <stdio.h>
#include "holberton.h"
/**
*_strlen - 0
*@s: char
*Return: i
*/
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*s != '\0' && s)
	{
		s++;
		i++;
	}
	return (i);
}
/**
*_pow - 0
*@s: int
*Return: r
*/
int _pow(int s)
{
	int r = 1, i;

	for (i = 0; i < s; ++i)
	{
		r *= 2;
	}
	return (r);
}
/**
*binary_to_uint - 0
*@b: char
*Return: sum
*/
unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b), i;
	unsigned int sum;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; ++i)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			sum += _pow(len - i - 1);
		}
	}
	return (sum);
}
