#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @str: string
* Return: returns char
*/

char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++) /*a for*/
{
if (str[i] >= 'a' && str[i] <= 'z') /*a if*/
{
str[i] = str[i] - 32;
} /*o if*/
} /*o for*/

return (str);
}
