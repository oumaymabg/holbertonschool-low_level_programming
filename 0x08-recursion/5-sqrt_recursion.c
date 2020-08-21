#include "holberton.h"
/**
 * fetcher - finds square root
 * @n: integer
 * @o: based iteration
 *
 * Return: -1 if n does not have a natural square root,else
 * return value of square root otherwise
 */
int fetcher(int n, int o)
{
if ((o * o) == n)
return (o);
if (o > (n / o))
return (-1);
return (fetcher(n, o + 1));
}
/**
 * _sqrt_recursion - returns natural square root of an int
 *@n : integer
 * Return: -1 if an integer does not have a natural square root,
 * value of square root otherwise
 */


int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
else
{
return (fetcher(n, 1));
}
}
