#include <stdio.h>
#include <stdlib.h>

typedef struct complex{
    float real;
    float imaginary;
}complex;

complex add(complex n1,complex n2);

int main()
{
    complex n1,n2,result;
    printf("Please enter first complex number.Real first(a+bi)");
    scanf("%f %f",&n1.real,&n1.imaginary);
    printf("Please enter second complex number.Real first(a+bi)");
    scanf("%f %f",&n2.real,&n2.imaginary);
    result=add(n1,n2);
    printf("Sum of entered values is %.1f + %.1fi",result.real,result.imaginary);
    return 0;
}

complex add(complex n1,complex n2){
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imaginary=n1.imaginary+n2.imaginary;

    return temp;
}
