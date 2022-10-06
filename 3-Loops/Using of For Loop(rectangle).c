/* Input	Result
   3 3      111
			101
			111

   4 5      11111
			10001
			10001
			11111    */
			
#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	
	int i , j;
	
	for(i=0;i<num1;i++){
		for(j=0;j<num2;j++){
			
			if(i==0 || j==0 || i==num1-1 || j==num2-1 )
			 printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
	
	
	return 0;
}

