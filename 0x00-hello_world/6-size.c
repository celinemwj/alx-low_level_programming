#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %ld byte(s)",(unsigned long) sizeof(a));
	printf("Size of an int: %ld byte(s)", (unsigned long)sizeof(b));
	printf("Size of a long int: %ld byte(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld byte(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %ld byte(s)", (unsigned long)sizeof(e));
	return (0);
}
