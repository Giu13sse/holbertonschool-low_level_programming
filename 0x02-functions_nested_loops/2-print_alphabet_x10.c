#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
char c;/*variables*/
int i = 0;

while (i <= 9)/*while */
{
for (c = 'a'; c <= 'z'; c++)/*start for*/
{
_putchar(c);
}/*ending for*/

_putchar('\n');

i++;
};/*ending while*/

}
