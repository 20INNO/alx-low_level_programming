#include<stdio.h>
#include<stdlib>

/**
 * *main -  the size of various types on the computer
 * 
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)¥n", sizeof(char));
	printf("size of an int: %ld byte(S)¥n", sizeof(int));
	printf("size of a long int: %ld byte(S)¥n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)¥n", sizeof(long long int));
	printf("size of afloat: %ld bye(s)¥n", sizeof(float));
	return (0);
}
