#include <stdio.h>
/**
* main - entry point
*
* Return: void
*/

int main(void)
{

int n = 100; /*Delcaring statements*/
int i;

i = 1;
while (i <= n) /* While*/
{
if (i % 3 == 0 && i % 5 == 0) /*Mul 3 and 5*/
{
printf("FizzBuzz ");
}

else if (i % 3 == 0) /*Mul 3*/
{
printf("Fizz ");
}

else if (i % 5 == 0) /*Mul 5*/
{
if (i < n)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", i); /*Print i*/
}

i++;


}
printf("\n"); /*Neo line*/
return (0);
}
