#include "main.h"
/**
*leet - encode a string
*@s:string
*Return: return to the pointer
*/
char *leet(char *s)
{
	int i;
	int j;
	char leet[] = "aAeEoOtTlL";
	int convert[] = {4, 3, 0, 7, 1};

	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j])
			{
				s[i] = convert[j / 2] + 48;
			}
			j++;
		}
		i++;
	}
	return (s);
}
