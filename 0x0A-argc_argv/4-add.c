#include <stdio.h>
#include <stdlib.h>
/**
 * main - add number
 * @argc:count
 * @argv:value
 * Return:0 if succses or 1 if not
 */
int main(int argc, char *argv[])
{
int i;
int y;
int sum = 0;
for (i = 1; i < argc; i++)
{
for (y = 0; argv[i][y] != '\0'; y++)
{
if (argv[i][y] < '0' || argv[i][y] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
