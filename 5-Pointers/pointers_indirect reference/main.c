#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=25;
    int *mptr;

    mptr=&m;

    *mptr=40;

    printf("m becomes %d\n",m);
    return 0;
}
