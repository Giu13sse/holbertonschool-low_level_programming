#include "main.h"

/**
* separator - checks if character is a seperator
* @c: character to be checked
* Return: if seperator return 1. Otherwise return 0;
*/

int separator(char c)
{

switch (c) /*a switch*/
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
return (1);

default:
return (0);
} /*o switch*/

}
/**
* cap_string - capitalizes chars after given deliminators
* @s: string to uppercase
* Return: returns modified string
*/
char *cap_string(char *s)
{
int count, upper;

upper = -32; /*value constant 32*/

count = 0;

while (s[count] != '\0') /*a while*/
{

if (s[count] >= 'a' && s[count] <= 'z') /*a 1st if*/
{
if (s[count] == *s || separator(s[count - 1])) /*a 2nd if*/

	s[count] += upper; /*o 2nd if*/
} /*o 1st if*/
count++;
}
return (s);
}
