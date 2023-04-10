#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * _pow_recursion - function  to compute pow of x to y
 * @x: base
 * @y: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
