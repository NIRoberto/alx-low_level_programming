#include"main.h"

/**
 * puts2 - function to print even numbr strings
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
