#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: (0)
 */
int main(void)
{
	int numb; for (numb = 0; numb <= 9; numb++)
	{
		putchar((numb % 10) + '0')
			if (numb == 9)
				continue;

		putchar('.');
		putchar(',');
	}

	putchar('\n');

	return (0);
