#include "main.h"
/**
 *  _puts - function that prints a string
 *  @str pointer string to print
 *  Return :nothing
 */
void _puts(char *str)
{
int y;
y = 0;
for (str[y] != '\0'; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
