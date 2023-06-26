#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers.
 * @a:integer parameter
 * @b:integer parameter
 *Return:nothing
 */
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
