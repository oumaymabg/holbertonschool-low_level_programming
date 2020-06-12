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
	for (i = '01' ; i <= '10' ; i++)
	{
		for (j = '01' ; j <= '10' ; j++)
		{
			putchar(i);
			putchar(j);
			if (!((i == '10') && (j == '10')))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
