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
int i, j;
	int r = 0;
for (i = '0' ; i <= '8' ; i++)
{
	r++;
for (j = r ; j <= '9' ; j++)
{
putchar(i);
putchar(j);
if (!((i == '8') && (j == '9')))
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
