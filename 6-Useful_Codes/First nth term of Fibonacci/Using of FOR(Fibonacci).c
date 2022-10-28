/*Fibonacci numbers are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ....

(Each number is sum of the previous two numbers except the first two numbers 0 and 1 which are predefined)

Write a complete C program which reads a positive integer number N , and prints the N.th fibonacci number. */


#include<stdio.h>
int main()
{
	int num1;
	printf("How many terms you want for fibonacci?\n");
	scanf("%d",&num1);
	printf("First %d terms of Fibonacci series are : \n", num1);

	int i, first=0, second=1 , result;


	for(i=0;i<num1;i++) {

			if(i<=1)
			result=i;

			else {
				result= first + second ;
				first =  second;
				second= result;
				}
	 printf("%d\n",result);
}

	return 0;
}
