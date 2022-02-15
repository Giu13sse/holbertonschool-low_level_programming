#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int alphabet; /*Declaring*/
int count;

count = 0;
while (count < 10) /*while */
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++) /*start for*/
{
_putchar(alphabet);
} /*ending for*/

count++;
_putchar('\n'); /*new line*/
} /*ending while*/

return (0);/* 0*/
}
