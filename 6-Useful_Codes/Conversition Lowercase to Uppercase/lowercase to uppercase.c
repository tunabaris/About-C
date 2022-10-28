#include<stdio.h>

int main(){
	
	char ch;
	
	scanf("%c",&ch);
   
    printf("%c", ch-('a'-'A'));	// We know that all these difference between uppercase('A') and lowercase ('a') is the same.
	
	
	return 0;
}
