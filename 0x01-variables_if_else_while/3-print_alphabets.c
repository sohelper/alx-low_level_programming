#include <stdio.h>
/**
 * main - lowercase, and then in uppercase
 * Return:0
 */
int main(void)
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');
return (0);
}

