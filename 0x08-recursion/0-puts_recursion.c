#include "holberton.h"
/**
* _puts_recursion - a function that return the number of character in string
* based on another string
* @s:return string
* Return: return the number of characters
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
  else 
  {
    _putchar(*s);
    _puts_recursion(s + 1);
  }
}
