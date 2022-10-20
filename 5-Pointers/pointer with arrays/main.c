#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    char array[]="a string";
    char *p = array;

    for(i=0;i<strlen(array);i++){

    printf("array[%d] = %c   *(p+%d) = %c   &array[%d] = %p   p+%d = %p\n",i,array[i],i,*(p+i),i, &array[i],i, p+i);
    }
    return 0;
}
