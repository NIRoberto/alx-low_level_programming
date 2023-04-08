#include"main.h"

/**
 * _strlen - function to count a character of string
 * @s: string inputed in paramenter
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0, i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
