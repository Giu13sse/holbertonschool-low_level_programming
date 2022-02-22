#include "main.h"

/**
* swap_int - swap between a and b
*@a: A pointer to an int that will be updated
*@b: B pointer to an int that will be updated
* Return: void
*/

void swap_int(int *a, int *b)
{
int z; /*variables*/

z = *a;
*a = *b;
*b = z;
}
