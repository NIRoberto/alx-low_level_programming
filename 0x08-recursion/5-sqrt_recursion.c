#include<math.h>
#include"main.h"

/**
 * _sqrt_recursion - function to compute the square root of a number
 * @n: inputednumber
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt(n));
}
