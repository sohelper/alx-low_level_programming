#include "main.h"
/**
 *print_diagonal - prints a line n
 *@n: number of '\'
 *Return: void
 */
void print_diagonal(int n)
{
int i, space;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
