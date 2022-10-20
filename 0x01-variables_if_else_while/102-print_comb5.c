#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * return (0)
 */
int main(void)
{
	int c, m, i, k;

	for (c = '0'; c <= '99'; c++)
	{
	for (m = '0'; m <= '99'; m++)
	{
	for (i = '0'; i <= '99'; i++)
	{
	for (k = '0'; k <= '99'; k++)
	{
	if (c < m < i && i < k)
	{
	putchar(c);
	putchar(m);
	putchar(i);
	putchar(k);
	if (c != <= '0' && k != '100')
	{
	putchar(',');
	putchar(' ');
	putchar();
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
