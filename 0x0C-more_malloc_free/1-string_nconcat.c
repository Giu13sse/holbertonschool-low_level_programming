#include "main.h"
/**
 *_strlen - count arrray
*@s: array of elements
*Return: int i
*/
int _strlen(char *s)
{
unsigned int i;

i = 0;
while (s[i] != '\0') /*a While*/
{
i++;
} /*o While*/
return (i);
}

/**
 *string_nconcat - concatenates two strings
*@s1: string
*@s2: string
*@n: number bytes
*Return: char dst
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *dst;
unsigned int i, count, j, size, size_1, size_2;

if (s1 == NULL) /*1st If*/
s1 = "";

if (s2 == NULL) /*2nd If*/
s2 = "";

size_1 = _strlen(s1);
size_2 = _strlen(s2);

if (n >= size_2) /*a 3rd If*/
{
count = size_2;
} /*o 3rd If*/
else
{
count = n;
}

size = size_1 + count + 1;
dst = (char *) malloc(size *sizeof(char)); /*malloc*/
if (dst == 0) /*a 4th If*/
{
return (NULL);
} /*o 4th If*/

{
for (i = 0; *(s1 + i) != '\0'; i++) /*a 1st For*/
*(dst + i) = *(s1 + i); /*o 1st For*/
for (j = 0; j < count; j++) /*a 2nd For*/
{
*(dst + i) = *(s2 + j);
i++;
} /*o 2nd For*/
*(dst + i) = '\0';
}
return (dst);
}
