#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size:size of array
 * @c:character insert
 * Return:NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int y;
if (size == o || ar == 0)
{
return (NULL);
}
ar = malloc(sizeof(char) * size);
for (y = 0; y < size; y++)
{
ar[y] = c;
}
return (ar);
}
