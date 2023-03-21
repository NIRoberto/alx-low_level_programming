#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 always (Success)
 */
 int main(void)
 {
	 char rev[] = "zyxwvutsrqponmlkjihgfedcba\n";
	 int i;

	 for (i = 0;i < 27;i++)
	 {
		 putchar(rev[i]);
	 }
	 return (0);
 }
