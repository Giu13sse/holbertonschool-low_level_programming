#include "main.h"
/**
*_strncpy -  copies a string
*@dest: A pointer to an char that will be updated
*@src: A pointer to an char that will be updated
*@n: value
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)

{
int i;

i = 0;
while (i < n && src[i] != '\0') /*a 1st while*/
{
dest[i] = src[i];
i++;
} /*0 1st while*/

while (i < n) /*a 2nd while*/
{
dest[i] = '\0';
i++;
} /*0 2nd while*/

return (dest);
}
