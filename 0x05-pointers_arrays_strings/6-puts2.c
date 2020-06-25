#include "holberton.h"
/**
 * puts2 - puts
 * @str: char pointer
 */
void puts2(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j = j + 2)
{
_putchar(str[j]);
}
_putchar('\n');
}

