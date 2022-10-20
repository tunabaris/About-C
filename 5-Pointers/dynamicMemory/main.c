#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = NULL;

    str=(char*)malloc(15 * sizeof(char));        //Initial memory allocation
    strcpy(str,"baris");
    printf("String = %s , adress = %u\n",str,str);

    str=(char*)realloc(str ,25 * sizeof(char));   //Reallocating memory
    strcat(str," tuna");
    printf("String = %s , adress = %u\n",str,str);

    free(str);    //free the memory

    return 0;
}
