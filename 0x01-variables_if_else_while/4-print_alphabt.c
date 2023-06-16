#include <stdio.h>
/**
 * main - exept
 * Return:0
 */
int main(void)
{
char except;
for (except = 'a' ; except <= 'z' ; except++)
{
	if (except == 'e' || except == 'q')
		continue;
	else
		putchar(except);
}
putchar('\n');
return (0);
}
