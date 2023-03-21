#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 always (Success)
 */
 int main(void)
 {
	 int i;
	 char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	 for (i = 0; i < 26; i++)
	 {
		 putchar(alphabet[i]);
	 }
	 printf("\n");
	 return (0);
 }
