#include "main.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
*@nmemb: number of element in the array
*@size: bytes for each position in the array
*Return: pointer void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0) /*1st if*/
return (NULL);

p = malloc(nmemb * size);
if (p == NULL) /*2nd if*/
return (NULL);

for (i = 0; i < nmemb * size; i++) /*for*/
p[i] = 0;

return (p);

}
