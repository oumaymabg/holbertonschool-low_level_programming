#include "holberton.h"
/**
*_strlen-2-strlen
*@s: char pointer
* Return: length
*/
int _strlen(char *s)
{
int lng;
int i;
i = 0;
lng = 0;
while (s[i] != '\0')
{
lng++;
i++;
}
return (lng);
}
