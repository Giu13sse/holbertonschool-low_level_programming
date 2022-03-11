#include "main.h"
/**
 * array_range - allocates memory for an initialized buffer
 * @min: number of memory bytes
 * @max: number of data type bits
 * Return: return pointer to initialized buffer
 */
int *array_range(int min, int max)
{
int *p;
unsigned int i;

if (min > max) /*1st if*/
return (NULL);

p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL) /*1st if*/
return (NULL);

for (i = 0; min <= max ; i++) /*a for*/
{
p[i] = min;
min++;
} /*o for*/

return (p);
}
