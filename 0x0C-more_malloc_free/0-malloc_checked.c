#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b:unsigned int
 * Return: value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
return ptr;
}
