#include "holberton.h"
/**
* prime_checker - a function that check if a number
* is divided by another given number
* @n: the number we want to check if prime or no
* @o: the number we will divide with
* Return: 0 if the number divided, 1 if it is not
*/
int prime_checker(int n, int o)
{
if ((n % 2) == o)
return (1);
if (n % o == 0)
return (0);
return (prime_check(n, o + 1));
}
/**
 * is_prime_number - a function that check if a number is prime
* or no
 * @n: number
 * Return: 1 if the number is,0 if it is not
 */

int is_prime_number(int n)
{
return (prime_checker(n, 1));
}
