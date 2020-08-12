#include "holberton.h"
/**
* print_array - display array
* @a: array pointer
* @n: integer
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%i" ", ", a[i]);
}
_putchar('\n');
}
