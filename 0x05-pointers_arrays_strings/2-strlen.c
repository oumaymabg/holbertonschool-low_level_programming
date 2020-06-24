/**
*_strlen-2-strlen
*@s:pointer string
*@lng:int return value of _strlen
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
