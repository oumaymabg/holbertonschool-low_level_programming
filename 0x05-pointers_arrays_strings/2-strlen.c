/**
*_strlen-2-strlen
*@s:pointer string
*@return:10
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
