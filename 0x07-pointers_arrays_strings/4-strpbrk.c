#include "holberton.h"
/**
* _strspn - a function that return the number of character in string
* based on another string
* @s: the initial string
* @f: the initial string
* @accept: the second string
* Return: return the number of characters
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}

	return (0);
}

