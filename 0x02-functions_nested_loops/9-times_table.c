#include "holberton.h"
/**
* times_table - check the code for Holberton School student
* Return the nine time table
*
*/
void times_table(void)
{
int n, j, i;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{
n = j * i;
printf("%d", n);
if (i != 9)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
