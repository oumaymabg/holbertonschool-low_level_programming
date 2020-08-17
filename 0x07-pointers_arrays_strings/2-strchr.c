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
int found = 0;
  if (!s)
    return (0);

while (*s != '\0' || found == 1)
{
if (*s == c)
{
return (s);
found = 1;
}
else
s++;
}
return (0);
}
