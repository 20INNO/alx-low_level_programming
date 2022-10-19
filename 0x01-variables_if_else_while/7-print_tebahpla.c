#include<stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse using the putchar
 *
 * return: (0).
 */
int main(void)
{
	char reversealphabet;

	for (reversealphabet = 'z'; reversealphabet >= 'a'; reversealphabet--)
		putchar(reversealphabet)

	putchar('\n');

	return (0);
}
