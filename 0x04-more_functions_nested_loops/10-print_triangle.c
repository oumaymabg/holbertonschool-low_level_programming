#include "holberton.h"

/**
* print_triangle - print digit except 2 and 4
* @a: int
*/
void print_triangle(int a)
{
int i, j , k;
if (a <= 0)
{
_putchar ('\n');
}
else
{
for (i = 1; i <= a; i++)
{
for (j = a - i ; j > 0; j--)
{
_putchar (' ');
}
for (k = 1;k <= i;k++)
_putchar ('#');
_putchar ('\n');
}
}
}
