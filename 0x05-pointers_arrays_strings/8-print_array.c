#include "holberton.h"
/**
* print_array
* @array: array pointer
*/
void print_array(int *a, int n);
{
int i;

for (i = 0;i < n;i++)
{
printf (a[i], ","," ");
}
_putchar('\n');
return 0;
}
