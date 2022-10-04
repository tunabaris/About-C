//Write a complete C program that finds the greatest of three integer numbers.

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers.");
	scanf("%d%d%d",&num1,&num2,&num3);

	if (num1>num2 && num1>num3)
	  printf("Greatest number between %d , %d and %d is %d.",num1,num2,num3,num1);

	else if(num2>num1 && num2>num3)
	  printf("Greatest number between %d , %d and %d is %d.",num1,num2,num3,num2);

	else
	   printf("Greatest number between %d , %d and %d is %d.",num1,num2,num3,num3);

	return 0;
}
