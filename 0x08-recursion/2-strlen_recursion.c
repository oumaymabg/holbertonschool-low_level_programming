#include "holberton.h"
/**
* _strlen_recursion - a function that return the number of character in string
* @s:based string
* Return: return the number of characters
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (0);
	}
	i += _strlen_recursion(++s);
	return (i);
}
