/*Input	         Result
   5       Input number of rows :
				*
				**
				***
				****
				*****           */
				
				
#include<stdio.h>
int main(){
  int num;
  scanf("%d",&num);
  printf("Input number of rows :");
  int i,j;
  for(i=0;i<=num;i++){
  	for(j=0;j<i;j++){
  		printf("*");
	  }
	 printf("\n");
  }	
  
	
	
	return 0;
}

