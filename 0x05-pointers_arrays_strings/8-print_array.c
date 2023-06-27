#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array of numbers
 * @n:integer number
 * Return:nothing
 */
void print_array(int *a, int n)
{
int y;
for (y = 0; y < n; y++)
{
if (y == 0)
printf("%d", a[y]);
else
{
printf(", %d", a[y]);
}
}
printf("\n");
}
