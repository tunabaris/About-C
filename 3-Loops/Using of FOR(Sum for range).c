//Develop a complete C program to find sum of odd numbers for a given range (from m to n).

#include<stdio.h>
int main()
{
    int r1,r2 ;
    printf("Please define a range to calculate odd numbers in between.\n From :");
    scanf("%d", &r1);
    printf("To:");
    scanf("%d", &r2);


    int counter,result=0;

     if (r1%2==1)
        r1=r1 ;
     else
      r1++ ;

    for(counter=r1; counter<=r2; counter+=2){

        result+=counter ; }
        printf("Sum of odd numbers = %d", result);

    return 0;
}
