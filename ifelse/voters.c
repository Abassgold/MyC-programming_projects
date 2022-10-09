#include<stdio.h>
/*
This program will tell you if you are eligible to vote
*/

int main(void)
{
	int age;

	printf("Enter your age>>  ");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("Sorry! come back when you clock 18 and and above\n");
	}
	else
	{
		printf("Congrats you can now proceed with your registration");
	}

	return (0);
}
int main(void)
{
	myAge();
}
