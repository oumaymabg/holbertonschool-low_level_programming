#include <stdio.h>
**/
*
*Return: Always 0 (Success)
*/
int main(void)
{
        int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);
			if (!((i == '9') && (j == '9')))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}