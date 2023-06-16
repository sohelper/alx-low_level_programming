#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - if else
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int soso = n % 10;

	printf("Last digit of %d is %d ", n, soso);
	if (soso > 5)
	printf("%d is greater than 5\n");
	if (n == 0)
	printf("%d is 0\n");
	if (x < 6 && x != 0)
	printf("%d is less than 6 and not 0\n");

	return (0);
}
