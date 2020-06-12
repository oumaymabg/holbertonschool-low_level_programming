<<<<<<< HEAD
=======

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
putchar('\n');
return (0);
}
>>>>>>> 87aa6ac9b3765c15b1c0c47289c249d580e30ce3
