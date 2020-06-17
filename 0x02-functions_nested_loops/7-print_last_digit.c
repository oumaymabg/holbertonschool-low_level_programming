#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n: int
* Return: last digit
*/
int print_last_digit(int n)
{
int i;

i = n % 10;
	if (i < 0)
	{
	_putchar((i * (-1)) + '0');
	return (i * (-1));
	}
	else
	{
	_putchar(i + '0');
	return (i);
	}
}
