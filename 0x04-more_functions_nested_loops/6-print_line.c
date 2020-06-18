#include "holberton.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: int
 *
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

