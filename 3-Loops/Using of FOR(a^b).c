//Write a complete C program which finds the a^b using for loop and print the result on the screen.

#include<stdio.h>
int main(){
	int num1,num2;
	printf("Please enter 2 integer. One for base.One for power.(Base firstly)\n");
    scanf("%d%d",&num1,&num2);

    int i, result=1;

    for(i=1;i<=num2;i++){
    	result=result*num1 ;
	}

	printf("%d to the power of %d : %d",num1,num2,result);





	return 0;
}
