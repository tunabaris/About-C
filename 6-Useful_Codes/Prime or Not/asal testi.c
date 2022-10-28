#include<stdio.h>
int prime(int asal) {
	int i ;
	int flag=0;
	for (i=2;i<asal;i++) {
		
		if(asal%i==0){
		    printf("%d Not a prime", asal);
			flag=1;
		    break;} 
	
			
	}
	if (flag==0)
	printf("%d is prime",asal);
  
    return asal;
	
}


int main(){
	int a;
	scanf("%d",&a);
	prime(a);
	
	return 0;
}
