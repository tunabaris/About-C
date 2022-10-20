#include <stdio.h>
#include <stdlib.h>

int square(int *a);

int main()
{
    int c;
    printf("Hello! Please enter a number.\n");
    scanf("%d",&c);

    printf("Square of entered value is %d",square(&c));

    return 0;
}

int square(int *a){
    int temp;
    temp = *a * *a;
    return temp;
}
