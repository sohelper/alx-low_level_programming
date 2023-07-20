#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_iterator - executes a function on each element of an array
*@array: array to be targeted
*@size: size of array
*@action: function to be executed
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
