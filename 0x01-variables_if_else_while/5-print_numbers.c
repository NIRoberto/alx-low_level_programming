#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 always (Success)
 */
 int main(void)
 {
	 int i;
	 char nums[] = "0123456789";
	 
	 for (i = 0;i < 10;i++)
	 {
		 putchar(nums[i]);
	 }
	 printf("\n");
	 return (0);
 }
