#include <stdio.h>

enum week{Mon, Tue=100, Wed, Thu=12, Fri, Sat, Sun};

int main()
{
    enum week day;
    day=Thu;

    if(day==Sat){
        printf("%d", day); //indentation
    }
    else if (day==Wed)
        printf("%d", day);
    else
        printf("wrong day");

    return 0;
}

