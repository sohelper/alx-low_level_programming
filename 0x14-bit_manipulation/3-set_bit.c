
/**
*set_bit - sets a bit at position to 1
*@n: number
*@index: index
*Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n |= (1 << index);
return (1);
}
