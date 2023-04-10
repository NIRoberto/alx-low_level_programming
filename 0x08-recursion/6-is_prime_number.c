#include"main.h"

/**
 * is_prime_number checke is prime number
 * @n: nputednummber
 * Return: return value
 */

int is_prime_number(int n)
{
	int res = 1;
	int i;

	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	for (i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			res = 0;
			break;
		}
	}
	return (res);
}
