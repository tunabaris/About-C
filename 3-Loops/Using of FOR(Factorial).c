//Write a complete C program that prints the value of factorial according to given input.

#include<stdio.h>
int main()
{
	int num1;
	printf("Please enter an integer: ");
	scanf("%d",&num1);

	int i,result=1;

	for(i=1;i<=num1;i++){
		result=result*i ;
	}

	 printf("Factorial of %d is %d.",num1, result);


	return 0;
}
