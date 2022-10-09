#include<stdio.h>
/*
 * Write a program that allows you to enter qn integer until you enter zero
 */

int main(void)
{
	int n;

	printf("Enter any number other than zero");
	scanf("%d", &n);

	while (n != 0)
	{
		printf("Enter the number");
		scanf("%d", &n);
	}
	printf("You are out of this program");
}
