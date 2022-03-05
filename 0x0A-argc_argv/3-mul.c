#include <stdio.h>
#include<stdlib.h>

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
int first_num;
int second_num;
int result;

(void) argc;

count = 1;
if (argv[count] != '\0') /*a 1st if*/
{

if (argv[count] == NULL || argv[count + 1] == NULL) /*a 2nd if*/
{
printf("Error\n");
return (1);
} /*o 2nd if*/

else /*a else*/
{
first_num = atoi(argv[count]); 
second_num = atoi(argv[count + 1]);
result = first_num * second_num;

printf("%d\n", result);
} /*o else*/

} /*o 1st if*/

return (0);
}
