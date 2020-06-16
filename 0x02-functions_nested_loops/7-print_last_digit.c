#include "holberton.h"
#include "math.h"
/**
*print_last_digit - entry function
*@n: int
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = n * (-1);
}
if (n >= 10)
{
n = n % 10;
}
return (n);
}
