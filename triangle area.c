#include<stdio.h>
int main ()
{
    float base,height,area;
    printf("enter base:");
    scanf("%f",&base);
    printf("enter height:");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("Area is =%.1f,",area);
    return 0;

}
