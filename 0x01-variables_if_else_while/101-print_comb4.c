#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
int left; /*vars*/
int right;
int center;

/*for 0-9 with ASCII*/

for (left = 48; left <= 57; left++)
{
for (center = left + 1; center <= 57; center++)
{
for (right = center + 1 ; right <= 57; right++)

{

putchar(left); /*printing*/
putchar (center);
putchar (right);

/*break program*/
if ((left == 55) && (center == left + 1) && (right == center + 1))
{
break; /*break program*/
}

putchar(','); /*printing*/
putchar (' '); /*printing*/

} /*end 2*/

} /*end 1*/

} /*end main*/

putchar('\n'); /*printing*/

return (0);

}
