#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string.
 * @s:string
 * @c:character
 * Return: returns pointer to first occcurence of c
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	;
if (s[i] == c)
{
return (s + i);
}
else
{
return (null);
}
}
