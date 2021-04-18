#include<stdio.h>
enum days_of_weeks
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days_of_weeks day1,day2;
    day1=tue;
    day2=wed;
    int dif = day2-day1;
    printf("day difference = %d\n",dif);


getch();
}
