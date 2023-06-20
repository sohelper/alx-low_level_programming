#include "main.h"
/**
 * function -  prints 10 times the alphabet, in lowercase
 * Return:0
 */
void print_alphabet_x10(void)
{
int num;

for (num = 0 ; num < 10 ; num++)
{
char x;

for (x = 'a' ; x <= 'z' ; x++)
_putchar(x);
}
_putchar('\n');
}
