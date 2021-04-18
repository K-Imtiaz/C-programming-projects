//write a program that calculate of a triangle area
#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Base = ");
    scanf("%f",&base);

    printf("Height=");
    scanf("%f\n",&height);
area=(float)1/2 *base *height;
    printf("Area =%.2f\n",area);

return 0;
}
