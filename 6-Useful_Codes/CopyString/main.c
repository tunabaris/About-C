#include <stdio.h>
#include <stdlib.h>


void copyString(char *to , char *from);

int main()
{
    char string1[]="A string to be copied.";
    char string2[50];

    copyString(string2,string1);
    printf("%s\n",string2);
    return 0;
}

void copyString(char *to , char *from){
    while(*from)  // The null character (\0) is equal to the value 0.
        *to++ = *from++;

    *to='\0';
}
