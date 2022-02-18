#include "main.h"
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
int i; /* statements*/

i = 0;
while (i < 10)/*A While*/
{
_putchar (i + '0'); /*print value i*/
i++;
}

_putchar ('\n'); /*New line*/
}
