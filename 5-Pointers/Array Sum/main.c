#include <stdio.h>
#include <stdlib.h>

int arraySum(int array[], int n);

int main()
{
    int values[5]={3,8,5,69,-70};

    printf("The sum is %d",arraySum(values,5));
    return 0;
}

int arraySum(int array[], int n){

int sum=0, *ptr;
int *const arrayEnd=array+n;             //specifies that a variable's value is constant and tells the compiler to prevent the programmer from modifying it

for(ptr=&array[0]; ptr<arrayEnd; ptr++)
    sum += *ptr;

return sum;

}
