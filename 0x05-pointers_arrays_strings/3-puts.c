#include "main.h"
/**
 *  _puts - function that prints a string
 *  @str pointer string to print
 *  Return :nothing
 */
void _puts(char *str)
{
int y;
for (y=0;str[y] != '\0'; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
