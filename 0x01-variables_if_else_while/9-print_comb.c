#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
if (n != '0')
{
putchar(',');
putchar(' ');
}
putchar(n);
}
putchar('\n');
return (0);
}
