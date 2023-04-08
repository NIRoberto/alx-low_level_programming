#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 always (Success)
 */
int main(void)
{
	char base16[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(base16[i]);
	}
	putchar('\n');
	return (0);
}
