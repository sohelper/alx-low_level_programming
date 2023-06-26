#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * @s:string that print
 * Return :nothing
 */
void print_rev(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
{
}

int y;

for (y = len; y >= 0; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
