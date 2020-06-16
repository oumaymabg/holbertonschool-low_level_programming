#include "holberton.h"
#include "math.h"
/**
*int print_last_digit
*@n: print last digit
* Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
     if (n >= 10)
{
 n = n % 10;
}
return (n);
}
