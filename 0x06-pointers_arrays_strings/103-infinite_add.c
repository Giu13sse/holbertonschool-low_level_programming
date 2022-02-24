#include "main.h"

/**
* infinite_add - adds two numbers.
* @n1:char
* @n2:char.
* @r:char
* @size_r:int
* Return:char.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n; /*variables*/

for (i = 0; n1[i]; i++) /*a 1st for*/
;
for (j = 0; n2[j]; j++) /*a 2nd for*/
;
if (i > size_r || j > size_r) /*a 3rd for*/
return (0);
m = 0;
/*a 1st for*/
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0) /*a 4th if*/
n += n1[i] - '0';
if (j >= 0) /*a 5th if*/
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0) /*a 6th if*/
{
break;
} /*o 6th if*/
m = n / 10;
r[k] = n % 10 + '0';
} /*o 1st for*/
r[k] = '\0';
if (i >= 0 || j >= 0 || m) /*a 7th if*/
return (0);
for (k -= 1, l = 0; l < k; k--, l++) /*a 2nd for*/
{
m = r[k];
r[k] = r[l];
r[l] = m;
} /*o 2nd for*/
return (r);
}
