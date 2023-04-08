#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * print_rev -  function that print string in reverse
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
