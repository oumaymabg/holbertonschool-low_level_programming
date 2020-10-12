#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - change array tostring
 * @ac: number of arguments
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j, r;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	r = 0;
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0' ; ++j)
		{
			r++;
		}
	}

	p = malloc(r + ac + 1 * sizeof(p));
	if (p == NULL)
	{
		return (NULL);
	}
	r = 0;
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			p[r] = av[i][j];
			r++;
		}
		p[r] = '\n';
		r++;
	}
	return (p);
}
