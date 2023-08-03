#include "main.h"

/**
*get_bit - get the value of index number
*@n: the number
*@index: index begin from 0
*Return:value
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}
