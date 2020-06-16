#include "holberton.h"
/**
* void times_table check the code for Holberton School student
* @n: int
* Return: 1 or 0 or -1
*/
int main()
{
int n, i;
printf("Enter an integer = ");
scanf("%d",&n);
for(i=1; i<=10; i++)
{
printf("%d * %d = %d \n", n, i, n*i);
}
return(0);
}
