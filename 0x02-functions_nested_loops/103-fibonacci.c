#include <stdio.h>
#include <stdlib.h>
#define n 4000000

/**
 * main - print Even Liber Abbaci
 * Return: 0.
 */
int main(void)
{
/* statements*/
unsigned long num_1, num_2, num_3;
unsigned long result;

result = 0;
num_1 = 1;
num_2 = 2;

/*While*/
while (num_1 <= n)
{
if (num_1 % 2 == 0)
{
result += num_1;
}
num_3 = num_2;
num_2 = num_1 + num_2;
num_1 = num_3;
} /*While*/

printf("%lu\n", result); /*result*/
return (0);
}
