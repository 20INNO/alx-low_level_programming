#include<stdlib.h>
#include<stdio.h>
/**
 * main -  print all possible different combinations of two digits in ascending order
 *
 * Return: (0).
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			putchar((dig1 % 10) + '0');
			putchar((dig2 % 10) + '0');

			if(dig2 != '8' || (dig2 == 8 && dig1 != 9))

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n')

	Return (0);	
