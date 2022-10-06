/*Write a complete C program (including libraries and main function) that reads an integer, N, between 1 and 26, and prints Nth lowercase letter in the English Alphabet on the screen.
In this question, you are not allowed to use if-else, switch-case or any kind of loop. input:2  output:b*/

#include<stdio.h>
int main(){

	int num;
	printf("Please enter a number.(1-28)\n");
	scanf("%d",&num);
	printf("%c",num+'a'-1);

	return 0;
}
