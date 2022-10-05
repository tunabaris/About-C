#include<stdio.h>
int main()
{
    char gender ;
    printf("Enter the gender M/F\n");
    scanf("%c",&gender);

    switch (gender)
   {case 'm' : printf("Male"); break;
    case 'M' : printf("Male"); break;
    case 'f' : printf("Female"); break;
    case 'F' : printf("Female"); break;

        default : printf("ERROR");
    }

    return 0 ;
}
