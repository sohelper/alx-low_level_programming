#include "function_pointers.h"
#include <stdio.d>
/**
*print_name - prints a name
*@name:name to print
*@f: function which print name
*/

void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;

f(name);

}
