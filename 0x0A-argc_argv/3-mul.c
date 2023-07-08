#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc:count
 * @argv:array
 * Return:0
 */
int main(int argc, char *argv[])
{
int i;
int y;
int mul;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
y = atoi(argv[2]);
mul = i *y;
printf("%d\n", mul);
return (0);
}
