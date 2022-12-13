#include <stdio.h>
/**
 * main - print out sized of dataa types in c
 * code by hollannah
 * Return: 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(a));
	return (0);
}
