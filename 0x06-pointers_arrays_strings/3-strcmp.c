#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1:array one
 * @s2:array two
 * Return:(0)
 */
int _strcmp(char *s1, char *s2)
{
int y = 0;
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
if (*s1 != *s2)
{
y = *s1 - *s2;
}
return (y);
}
