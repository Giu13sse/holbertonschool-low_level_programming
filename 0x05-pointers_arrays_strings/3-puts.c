#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to an int that will be updated
*
*Return: void
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++) /*a for*/
{
	_putchar (c[m]);

} /*o for*/
_putchar('\n');
}
