#include "main.h"
/**
 * print_numbers - print numbers
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i; /*Declaring statements*/

	i = 0;
	while (i < 10)/*A While*/
	{
		_putchar (i + '0'); /*print value i*/
		i++;
	}/*o While*/

	_putchar ('\n'); /*New line*/
}
