#include "main.h"

int _sqrt_recursion(int n)
int real_sqrt_recursion(int n, int m)

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @m: iterator
 *
 * Return: the resulting square root
 */
int real_sqrt_recursion(int n, int m)
{
	if (i * m > n)
		return (-1);
	if (i * m == n)
		return (m);
	return (real_sqrt_recursion(n, m + 1));
}
