#include "main.h"
/**
*_strcat -  concatenates two strings
*@dest: A pointer to an char that will be updated
*@src: A pointer to an char that will be updated
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0') /*a 1st while */
{
i++;
}	/*o 1st while */

j = 0;
while (src[j] != '\0') /*a 2nd while */
{
dest[i] = src[j];
j++;
i++;
} /*o 2nd while */

dest[i] = '\0';

return (dest);
}
