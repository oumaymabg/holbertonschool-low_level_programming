#include "holberton.h"
/**
*length - 0
*@s: string
*Return: length of str
*/
int length(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (0);
	}
	i += length(++s);
	return (i);
}
/**
*pal - true palindrom
*@s: string
*@i: first to middle counter
*@j:  last to middle counter
*Return: int
*/
int pal(char *s, int i, int j)
{
	if (i > j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (pal(s, ++i, --j));
	}

	return (0);
}
/**
*is_palindrome - 0
*@s: string
*Return: pal
*/
int is_palindrome(char *s)
{
	return (pal(s, 0, length(s) - 1));
}
