/**
*strlen-2-strlen
*@char:pointer string
*
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
return lng;
}
