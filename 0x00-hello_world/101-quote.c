#include<stdio.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(str);
	int i;
	for (i = 0; i < length ; i++)
	{
		putchar(str[i]);
	}
	return (1);
}

