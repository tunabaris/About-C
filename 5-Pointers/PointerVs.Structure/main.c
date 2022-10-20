#include <stdio.h>
#include <stdlib.h>

struct date{
    int month;
    int day;
    int year;
}date;


int main()
{
   struct date today,*datePtr;

   datePtr = &today;

   datePtr ->month = 8;
   datePtr ->day=12;
   datePtr -> year= 2022;

   printf("Today's date is %i/%i/%.2i .\n",(*datePtr).month,datePtr ->day,datePtr -> year);

    return 0;
}
