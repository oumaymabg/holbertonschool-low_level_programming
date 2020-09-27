#include "holberton.h"
/**
*_strncat function is concatenates two strings
*@src : first char
*@dest: second  char
*@n: int
*
*Return:dest
*
**/
char *_strncat(char *dest, char *src, int n);
{
int i = 0, j;

while (dest[i] != '\0')
i++;
for (j = 0; j < n && src[j] != '\0'; j++, i++)
dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
