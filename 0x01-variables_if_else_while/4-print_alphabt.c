#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 always (Success)
 */
int main(void)
{
	char letter[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		if ((letter[i] == 'q') | (letter[i] == 'e'))
		{
			continue;
		}
		putchar(letter[i]);
	}
	printf("\n");
	return (0);
}
