#include<stdlib.h>
#include<stdio.h>

/**
 * main - print the alphabet in lower case
 *
 * return: (0)
 */
int main(void)
{
	int alpha letters;

	for (alpha letter = 'a'; alpha letter <= 'z'; alpha letter++)
		putchar(letter);

	putchar('\n');

	return (0);
