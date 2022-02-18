#include <stdio.h>

/**
* main - Entry point.
*
* Return: Always 0.
*/

int main(void)

{
long n, i; /*variables*/

n = 612852475143;
for (i = 2; i < n; i++) /*a FOR*/
{
while (n % i == 0)
n = n / i;
} /*o For*/

printf("%lu\n", n); /*Neo line*/

return (0);
}
