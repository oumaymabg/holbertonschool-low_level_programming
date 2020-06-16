#include "holberton.h"
#include "stdlib.h"
#include "time.h"
/**
* jack_bauer - a function that prints every minute of the day of Jack Bauer,
*
* Return: starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
int h;
int m;
for (h = 00; h <= 23; h++)
{
for (m = 00; m <= 59; m++)
{
_putchar(h);
_putchar(':');
_putchar(m);
}
}
}
