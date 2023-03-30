#include "main.h"
/**
* string_toupper - change letters from lowecase to uper case
* @st: input of string
* Return: to the pointer
*/
char *string_toupper(char *st)
{
int i = 0;
while (st[i] != '\0')
{

if (st[i] >= 'a' && st[i] <= 'z')
{
st[i] = st[i] - 32;
}
i++;
}
return (st);
}


