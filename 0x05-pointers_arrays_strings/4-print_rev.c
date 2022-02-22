#include "main.h"
/**
* print_rev - prints a string rev
*@s: A pointer to an int that will be updated
*
*Return: void
*/

void print_rev(char *s)
{
int i;

i = 0;
while (s[i] != '\0') /*a while*/
{
i++;
} /*o while*/

for (i = i - 1 ; i >= 0; i--) /*a for*/
{
_putchar (s[i]);
} /*o for*/

_putchar ('\n');
}
