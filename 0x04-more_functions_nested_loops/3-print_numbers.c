#include "main.h"
/**
*print_numbers - function that print all numbers from 0 to 9
*Return: returns nothing
*/
void print_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
_putchar(num + '0');
}
_putchar('\n');
}
