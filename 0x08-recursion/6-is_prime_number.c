#include "holberton.h"
/**
* prime_checker - a function that check if a number
* is divided by another given number
* @n: the number we want to check if prime or no
* @o: the number we will divide with
* Return: 0 if the number divided, 1 if it is not
*/
int prime(int n, int i)
{
	if (i < 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime(n, i - 1));
}
/**
 * is_prime_number - check if the number is prime
 * @n: number to check
 * Return: if the number is prime
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
