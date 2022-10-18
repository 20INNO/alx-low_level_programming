#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print radom numbers and stae whether they are positive or negative.
 *
 *return: 0
 */
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	       printf("%d positive\n", n);
	else if (n < 0)
		printf("%d negative\n", n);
	else
		printf("%d zero\n", n);
	return (0);
}
