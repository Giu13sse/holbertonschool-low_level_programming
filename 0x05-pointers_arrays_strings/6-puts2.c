#include "main.h"

/**
*puts2 - prints every other character of a string,
*@str: A pointer to an int that will be updated
*
*Return: void
*/

void puts2(char *str)
{
int i; /*variables*/

for (i = 0; str[i] != '\0'; i++) /*a for*/
{
if (i % 2 == 0)
_putchar (str[i]);
} /*o for*/

_putchar ('\n');
}
