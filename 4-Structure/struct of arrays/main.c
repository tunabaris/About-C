#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day,month,year;
}date;

int main()
{
    date myDates[5]={};
    myDates[0].day=15;
    myDates[0].month=12;
    myDates[0].year=2000;

    printf("Printed date is %d/%d/%d",myDates[0].day,myDates[0].month,myDates[0].year);
    return 0;
}
