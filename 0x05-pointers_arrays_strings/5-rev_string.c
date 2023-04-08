#include<string.h>
#include"main.h"

/**
 * rev_string - function to reverse a string
 * @s: inputed string to be reversed 
 */
 
void rev_string(char *s)
{
	int len = strlen(s);
	char *p1 = s;
	char *p2 = s + len - 1;

	while (p1 < p2)
	{
		char t = *p1;
		*p1++ = *p2;
		*p2-- = t;
	}
}

