#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
/*Declaring */
long int n;
long int num_1 = 0;
long int num_2 = 1;
long int nextTerm;

for (n = 0; n < 50; ++n) /*for*/
{
nextTerm = num_1 + num_2;
num_1 = num_2;
num_2 = nextTerm;

if (n != 49)
{
printf("%ld, ", nextTerm);
}

else
{
printf("%ld\n", nextTerm);
}

} /*End */

return (0);
}
