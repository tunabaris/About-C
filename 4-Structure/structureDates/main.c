/****************
Date Structures
*****************/

#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;

dateShow(date temp);

int main()
{  date today;
    today.day=24;
    today.month=6;
    today.year=2022;

    dateShow(today);

    return 0;
}

dateShow(date temp){
    int d,m,y;
    d=temp.day;
    m=temp.month;
    y=temp.year;

    printf("Date is %d/%d/%d\n",d,m,y);
    printf("Also you are in %d. century",y/100+1);

}
