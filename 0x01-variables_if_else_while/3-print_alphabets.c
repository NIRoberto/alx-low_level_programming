#include<stdio.h>

/**
 * main - Entry point
 * 
 * Return: 0 always (Success)
 *
 */
 int main(void)
 {
	 char alphabets[] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	 int i;

	 for (i = 0; i < 52; i++)
	 {
		 putchar(alphabets[i]);
	 }
	 printf("\n");
	 return (0);
 }
	 
