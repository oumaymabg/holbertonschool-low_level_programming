#include "holberton.h"
#include <math.h>
/**
* print_last_digit - check the code for Holberton School students.
* @n: int
* Return: last digit
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = (-1) * n;
  return (n % 10);
}
else if (n >= 0)
{
  return (n % 10);

}
}
