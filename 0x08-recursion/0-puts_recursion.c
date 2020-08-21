#include "holberton.h"
/**
* _puts_recursion - a function that return the number of character in string
* based on another string
* @s:return string
* Return: return the number of characters
*/
void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
  return(0);
}
