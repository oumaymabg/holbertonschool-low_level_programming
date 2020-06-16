#include "holberton.h"
#include "math.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n: int
* Return: 1 or 0 or -1
*/
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
