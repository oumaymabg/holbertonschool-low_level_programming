#include "holberton.h"
/**
* void times_table check the code for Holberton School student
*
*/
void times_table(void)
{
int n, j, i;
for(j=0; j <= 9; j++)
{
for(i = 0; i <= 9; i++)
{
n = j * i;
if(j !=0)
{
_putchar(',');
_putchar(',');
}
if(n > 9)
{
_putchar(n / 10 + 48);
_putchar(a % 10 + 48);
}
else
{
_putchar(' ');
_putchar(a + 48);
}
}
_putchar('\n');
}
}
