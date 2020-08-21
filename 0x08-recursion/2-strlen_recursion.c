#include "holberton.h"
/**
* _strlen_recursion - a function that return the number of character in string
* @s:based string
* Return: return the number of characters
*/
int _strlen_recursion(char *s)
char m = s;
{
if (*s == '\0')
{
_putchar('\n');
return (s - m);
}
else
{
_strlen_recursion(s + 1);
}
}
