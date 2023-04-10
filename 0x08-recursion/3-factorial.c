#include<stdio.h>
#include"main.h"

/**
 * factorial - function to print a factial of number
 * @n: input number
 * Return: return factorial of number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return n * factorial(n - 1);
}
