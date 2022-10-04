#include<stdio.h>
int main(){
    int m1,m2,m3;
    printf("Enter the angles.");
    scanf("%d%d%d",&m1,&m2,&m3);
    while(m1+m2+m3!=180){
            printf("Invalid angles.");
    return 0;
        break;}
    if(((m1==m2) && (m1!=m3)) || ((m1==m3) && (m1!=m2)) || ((m2==m3)&&(m2!=m3)))
    printf("Isosceles triangle.");
    else if((m1==m2) && (m2==m3))
    printf("Equilateral triangle.");
    else
    printf("Scalene triangle.");



    return 0;
}
