/**
* rev_string - a function that reverse a string
* @s: char pointer
*
*/
void rev_string(char *s)
{
int a, b;
char c[200];

for (a = 0; s[a] != '\0'; a++)
{
c[a] = s[a];
}
for (b = 0; b != a; b++)
{
s[b] = c[a - 1 -b];
}
}

