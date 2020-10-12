#include "holberton.h"
/**
* _print_rev_recursion - a function that the given string in reverse
* @s: the giving string
* Return: return the reversed string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
