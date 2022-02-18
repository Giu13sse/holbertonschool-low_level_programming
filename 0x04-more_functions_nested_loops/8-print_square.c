#include "main.h"
/**
* print_square - prints a square
*@size: print size
* Return: Always 0.
*/

void print_square(int size)
{

/*variables*/
int i;
int z;

if (size > 0) /*a IF*/
{
for (i = 0; i < size; i++) /*Print (_) n times*/
{

for (z = 0; z < size; z++) /*a FOR*/
{
_putchar (35);
}
_putchar ('\n');

} /*o  FOR*/

} /*o IF*/

else
{
_putchar ('\n');
}

}
