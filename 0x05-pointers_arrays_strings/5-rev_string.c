#include "main.h"
/**
* rev_string - prints a string rev
*@s: A pointer to an int that will be updated
*
*Return: void
*/

void rev_string(char *s)
{

char *start_c, *end_c, c;/*variables*/
int i, count;
int length = 0;

for (i = 0; s[i]; i++) /*a for*/
{
length++;
} /*o for*/

count = length; /*variable*/
start_c = s;
end_c = s;

for (i = 0; i < count - 1; i++)/*a for*/
{
end_c++;
}/*o for*/

for (i = 0; i < count / 2; i++)/*a for*/
{
c = *end_c;
*end_c = *start_c;
*start_c = c;
start_c++;
end_c--;
}/*o for*/
}
