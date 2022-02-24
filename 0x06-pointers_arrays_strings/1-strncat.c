#include "main.h"
/**
*_strncat -  concatenates two strings
*@dest: A pointer to an char that will be updated
*@src: A pointer to an char that will be updated
*@n: value
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0') /*a 1st while*/
{
i++;
} /*0 1st while*/

j = 0;
while (j < n && src[j] != '\0') /*a 2nd while*/
{
dest[i] = src[j];
j++;
i++;
} /*a 2nd while*/

dest[i] = '\0';

return (dest);
}
