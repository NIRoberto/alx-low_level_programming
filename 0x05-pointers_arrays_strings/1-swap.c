#include"main.h"

/**
 * swap_int - function to swapp two number a and b
 * @a: first integer number
 * @b: second integer number
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
