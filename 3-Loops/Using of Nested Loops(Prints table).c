//Prints the numbers in the pattern as given in the following:
/*Input	      Result
   5	    5 5 5 5 5
	     	4 4 4 4
	    	3 3 3
	    	2 2
	    	1	     */
	
#include<stdio.h>
int main(){
	
	int num;
	scanf("%d",&num);
	
	int i,j;
	for(i=num;0<=i;i--){
		for(j=0;j<i;j++){
			
			printf("%d",i);
		}
		printf("\n");
	}
	
	
	return 0;
}
