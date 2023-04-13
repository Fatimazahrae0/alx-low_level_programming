#include "main.h"
/**
 * array_range - create an array of integer
 * @min:values of array
 * @max:values of array
 * Return:return to the newly array created
*/
int *array_range(int min, int max)
{
int *str;
int i;

if (min > max)
{
return (NULL);
}
str = malloc((max - min + 1) * sizeof(int));
if (str == NULL)
{
return (NULL);
}
for (i = 0; i <= max - min; i++)
{
str[i] = min + i;
}
return (str);

}
