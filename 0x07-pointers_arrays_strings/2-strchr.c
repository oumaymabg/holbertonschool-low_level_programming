#include "holberton.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strchr -strchr a function that the pointer of a character
* if it exists in a string and return null if it doesn't
* @s: a string  that contain many characters
* @c: the character that we need to look for
* Return: the returned pointer on the character looked for
*/
char *_strchr(char *s, char c)
{

while (*s != '\0' && s)
{
if (*s == c)
{
return (s);
}
s++;
}
return ((char *) 0);
}
