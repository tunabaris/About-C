//Write a complete C Program where you read a number from the user and then decide whether it is odd or even.

#include<stdio.h>

int main()
{
	int num;
	
	printf("Please enter an integer number:");
	scanf("%d",&num);
	
	if (num%2==0)
	printf("%d is an even number.",num);
	
	else
	printf("%d is an odd number.",num);
	
	
	
	
	return 0;
}
