#include "holberton.h"
/**
* factorial -is the operation of multiplying any natural number
* with all the natural
* @n:the given number
* Return: return the factorial of a number
*/
int factorial(int n)
{
if (n == 0 || n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}

