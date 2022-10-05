/*Input	Result
2 4     ****
 		****    */
 		
#include<stdio.h>
int main(){
	
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	
	int i,j;
	for(i=0;i<num1;i++){
		for(j=0; j<num2;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

