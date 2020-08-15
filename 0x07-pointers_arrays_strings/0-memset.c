#include "holberton.h"
/**
* _memset - Fills the first n bytes of the memory area
* pointer @s
* @s: A pointer
* @b: character
* @n: The number of bytes to be filled.
* Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
