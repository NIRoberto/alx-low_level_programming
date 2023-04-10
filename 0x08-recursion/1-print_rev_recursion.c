#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * _print_rev_recursion - function used to;reverse string
 * @s: string from input
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*str);
}

