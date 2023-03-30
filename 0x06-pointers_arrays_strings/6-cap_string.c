#include "main.h"
/**
* cap_string - capitalizes all words oh a strings
* @st:string
* Return: return to the pointer
*/
char *cap_string(char *st)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";

if (st[0] >= 'a' && st[0] <= 'z')
{
st[0] -= 32;
}
for (i = 1; st[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (st[i - 1] == separators[j] && st[i] >= 'a' && st[i] <= 'z')
{
st[i] -= 32;
}
}
}
return (st);
}


