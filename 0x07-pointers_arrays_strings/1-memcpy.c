#include "holberton.h"
/**
* _memcpy - a function that copy the content
* of @src to @dest based  on @n
* @src: the source memory area
* @dest: the recipient memory area
* @n: the number of iteration possible
* Return: the function  return the destination memory area @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
