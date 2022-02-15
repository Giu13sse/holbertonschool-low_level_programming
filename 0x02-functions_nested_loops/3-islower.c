#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 *
 * @c: The int to print
 * Return: 0 not lowercase, 1 lowercase
 */
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
