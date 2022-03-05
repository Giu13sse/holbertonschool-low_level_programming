#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* check_num - check - string there are digit
* @str: array str
*
* Return: Always 0 (Success)
*/

int check_num(char *str)

{
unsigned int count;

count = 0;
while (count < strlen(str)) /*a while*/

{
if (!isdigit(str[count])) /*a 1st if*/
{
return (0);
} /*o 1st if*/

count++;
} /*o while*/

return (1);
}

/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
int count;
int str_to_int;
int sum = 0;

count = 1;
while (count < argc) /*a 2nd while*/
{
if (check_num(argv[count])) /*a 2nd if*/

{
str_to_int = atoi(argv[count]);
sum += str_to_int;
} /*o 2nd if*/

else /*a 2nd else*/
{
printf("Error\n");
return (1);
} /*o 2nd else*/

count++;
} /*o 2nd while*/

printf("%d\n", sum); /*print sum*/

return (0);
}
