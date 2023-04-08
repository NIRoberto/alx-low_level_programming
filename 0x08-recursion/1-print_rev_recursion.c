#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * _print_rev_recursion - function used to;reverse string
 * @s: string from input
 */
void _print_rev_recursion(char *s)
{
	int l = strlen(s);
	char t;

	if (s == NULL)
	{
		return;
	}
	if (l <= 1)
	{
        return;
	}
	t = s[0];
	s[0] = s[l - 1];
	s[l - 1] = t;
	_print_rev_recursion(s + 1);
	putchar('\n');
}

