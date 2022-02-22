#include "main.h"

/**
*puts_half - prints every other character of a string,
*@str: A pointer to an int that will be updated
*
*Return: void
*/

void puts_half(char *str)

{
int i, last;

i = 0;
while (str[i] != '\0') /*a while*/
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++) /*a for*/
{
_putchar (str[i]);
} /*o for*/

_putchar ('\n');

}
