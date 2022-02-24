#include "main.h"
/**
* rot13 - convert to rot 13
* @str: input string
* Return: String conversion
*/
char *rot13(char *str)
{
int count = 0, x;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[count] != '\0') /*a 1st while*/
{
x = 0;
while (letters[x] != '\0') /*a 2nd while*/
{
if (str[count] == letters[x]) /*a if*/
{
str[count] = rot13[x];
break;
} /*o IF*/
x++;
} /*o 2nd while*/
count++;
} /*o 1st while*/
return (str);
}
