#include "main.h"
/**
* print_diagonal - prints diagonal line
*@n: print int
* Return: Always 0.
*/
void print_diagonal(int n)
{

/*Delcaring statements*/
int i;
int z;

if (n > 0) /*A IF*/
{
for (i = 0; i < n; i++) /*Print (_) # times*/
{
for (z = 0; z < i ; z++) /*Print (_) * 2ND IF*/
{
_putchar (' ');
} /*O second IF*/
_putchar (92);
_putchar ('\n'); /*Neo line*/

}

} /*o IF*/

else
{
_putchar ('\n');
}

}
