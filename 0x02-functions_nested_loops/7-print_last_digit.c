#include "holberton.h"
/**
 * _abs - checking the sign of a variable
* print_last_digit - check the code for Holberton School students.
* @n: int
* Return: 1 or 0 or -1
*/
int _abs(int n)
{
if (n >= 0)
return (n);
return (-n);
}
int print_last_digit(int n)
{
n = _abs(n);
_putchar((n % 10) + '0');
return (n % 10);
}
