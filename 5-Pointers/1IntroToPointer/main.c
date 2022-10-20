#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=0;
    int *pvalue=&value;                     //Set pointer to refer to value

    printf("Input an integer: ");
    scanf("%d",pvalue);                     //Read into value via the pointer

    printf("You entered %d.\n",value);
    return 0;
}
