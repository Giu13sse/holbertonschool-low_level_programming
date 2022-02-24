#include "main.h"

/**
* print_number - printing number with puts
*
* @n: input int
*/
void print_number(int n)
{
int count = 0, pow = 1; /*variables*/
unsigned int num = n;

if (n < 0) /*a if*/
{
_putchar('-');
num = -n;
} /*o if*/
while (n != 0) /*a 1st while*/
{
n /= 10;
count++;
} /*o 1st while*/
while (count > 1) /*a 2nd while*/
{
pow *= 10;
count--;
} /*o 2nd while*/
while (pow >= 1) /*a 3rd while*/
{
_putchar(num / pow % 10 + '0');
pow /= 10;
} /*o 3rd while*/
}
