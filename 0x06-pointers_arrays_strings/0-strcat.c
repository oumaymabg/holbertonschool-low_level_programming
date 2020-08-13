#include "holberton.h"
/**
 * _strcat - _strcat string
 * @src: char pointer
 * @dest: char pointer
 * Return:string
 */
char *_strcat(char *dest, char *src)
{
int i, j, k;

for (i = 0; dest[i] == '\0'; i++)
{}
for (j = 0; src[j] == '\0'; j++)
{}
for (i = i; i < i + j; i++)
{
k = 0;
dest[i] = src[k];
k++;
}
dest[i] = '\0';
return (dest);
}


