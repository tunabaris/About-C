
//Write a C program that finds the positive factors of a number (except itself) in descending order.
// ýnput    output
//  20      10 5 4 2 1 

#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	
	int i;
	
for(i=a-1; i>0 ;--i){
    if(a%i==0)
	printf("%d ",i)  ;
		
	}	
	
	return 0;
}
