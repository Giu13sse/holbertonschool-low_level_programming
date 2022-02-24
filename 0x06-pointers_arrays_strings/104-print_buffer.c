#include "main.h"
#include <stdio.h>

/**
* print_buffer - Prints a buffer
* @b: char
* @size: int
* Return:void
*/
void print_buffer(char *b, int size)
{
int x, i; /*variables*/

for (x = 0; x < size; x += 10) /*a 1st for*/
{
printf("%08x: ", x);

for (i = 0; i < 10; i++) /*a 2nd for*/
{
if ((i + x) >= size) /*a 1st if*/
printf("  ");

else
printf("%02x", *(b + i + x));

if ((i % 2) != 0 && i != 0) /*a 2st if*/
printf(" ");
} /*o 2nd for*/

for (i = 0; i < 10; i++) /*a 3rd for*/
{
if ((i + x) >= size) /*a 2nd if*/
break;

else if (*(b + i + x) >= 31 &&
*(b + i + x) <= 126) /*a 1st else if*/
printf("%c", *(b + i + x));

else
printf(".");
} /*o 3rd for*/

if (x >= size) /*a 3rd if*/
continue;

printf("\n");
} /*o 1st for*/

if (size <= 0) /*a 4th if*/
printf("\n");
}
