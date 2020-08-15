#include "holberton.h"
/**
* _memset - fills the memory of  the  @s
* @s: pointer
* @b: character
* @n: unsigned int
*
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
