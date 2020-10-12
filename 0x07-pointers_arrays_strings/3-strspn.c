#include "holberton.h"
/**
* _strspn - a function that return the number of character in string
* based on another string
* @s: the initial string
* @accept: the second string
* Return: return the number of characters
*/
unsigned int _strspn(char *s, char *accept)
{
  unsigned int i, j, n;

	n = 0;
	j = 0;
	while (s[j] != '\0' && s[j] != ' ')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == s[j])
			{
				n += 1;
			}
			i++;
		}
		j++;
	}


	return (n);
}
