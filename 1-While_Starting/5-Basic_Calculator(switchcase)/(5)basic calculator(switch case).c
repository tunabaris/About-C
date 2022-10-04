//Write a simple calculator program that reads operators (+, -, *, /)  and double operands from the user
//and makes the proper calculation. Note that use the operands with only one decimal digit in the operations.

#include<stdio.h>
int main(){
	char oprt;
	double num1,num2;
	printf("Enter two numbers.");
	scanf("%lf%lf",&num1,&num2);
	printf("Enter the operator (+,-,*,/).");
	scanf("%s",&oprt);

	switch (oprt){
		case '+': printf("Sum of %lf , %lf is %.1lf",num1, num2, num1+num2); break;                      // %.1lf  provide us get the results with 1 decimal digit.
		case '-': printf("Difference between %lf , %lf is %.1lf",num1, num2, num1-num2); break;          // %.2lf  provide us get the results with 2 decimal digit.
		case '*': printf("Product of %lf , %lf is %.1lf",num1, num2, num1*num2); break;                  // %.1f  provide us get the results with 1 decimal digit.
		case '/': printf("Division of %lf , %lf is %.1lf",num1, num2, num1/num2); break;
		default : printf("Invalid operator."); break;

	}


	return 0;
}
