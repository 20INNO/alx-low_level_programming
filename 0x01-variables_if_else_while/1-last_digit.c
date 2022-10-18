#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * mamin - print the last didgit of a randomly generated number whether its greater than 5, less than 6, or 0
 *
 * Return: 0
 */
int main(void)
{
	int n,x;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	x = n % 10;
	printf("last digit of n %d is %d", n, x);
	if (x > 5)
	{ 
	         printf("n > 5");
	}
        if (x=0)
	{
		printf("x");
	}
	if (x < 6 && x !=0)
		printf("n < 6 and !=0");
	return (0);
