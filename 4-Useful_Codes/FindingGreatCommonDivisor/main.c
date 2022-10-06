#include <stdio.h>
#include <stdlib.h>
int my_com_div(int a, int b);

int main()
{int c,d;
   printf("Please input two integer that you want to find greatest common divisor.\n");
   scanf("%d%d",&c,&d);
   printf("GCD of %d and %d is => %d",c,d,my_com_div(c, d));
   //my_com_div(c, d);

    return 0;
}

int my_com_div(int a, int b){
int min;
int result=1;
if (a<b)
    min=a;
else
    min=b;


for(int i=1;i<=min;i++){
    if(a%i==0 && b%i==0)
        result=i;
    }
    return result;
}
