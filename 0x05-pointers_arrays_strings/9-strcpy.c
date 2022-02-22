#include "main.h"
/**
*_strcpy -  copies the string pointed
*@dest: A pointer to an char that will be updated
*@src: A pointer to an char that will be updated
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')/*a while*/
{
dest[i] = src[i];
i++;
}/*o while*/
dest[i] = '\0';
return (dest);

}
