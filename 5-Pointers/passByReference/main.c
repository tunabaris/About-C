#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y);

int main(){
    int a,b;
    a=100;
    b=200;

    printf("Before the swap a value is %d\n",a);
    printf("Before the swap b value is %d\n",b);

    swap(&a,&b);  //swap the adresses

    printf("After the swap a value is %d\n",a);
    printf("After the swap b value is %d\n",b);


    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp=*x;  //Save the value at adress x
    *x=*y;    // put y into x
    *y=temp;  // put temp into y

    return;

}
