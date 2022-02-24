#include "main.h"

/**
* leet - function that encodes a string into 1337
* @str: character to be checked
* Return: if seperator return 1. Otherwise return 0;
*/
char *leet(char *str)
{
/*variables*/
int count = 0, i = 0;
char *letters = "aeotlAEOTL";
char *nums = "4307143071";


while (str[count] != '\0') /*a 1st while*/
{
i = 0;
while (letters[i] != '\0') /*a 2nd while*/
{
if (str[count] == letters[i]) /*a if*/
str[count] = nums[i];
i++;
} /*o 2nd while*/
count++;
} /*0 1st while*/

return (str);
}
