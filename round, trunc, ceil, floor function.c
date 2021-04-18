#include<stdio.h>
#include<math.h>
int main()
{
//round
    double x=10.53;
    double result=round(x);
    printf("round(%lf)=%lf\n",x,result);


    //trunc
    double x=0.5300077;
    double result=trunc(x);
    printf("trunc(%lf)=%lf\n",x,result);
    return 0;

    //ceil
    double x=2.9;
    double result=ceil(x);
    printf("ceil(%lf)=%lf\n",x,result);
    return 0;



    //floor
double x=2.9;
    double result=floor(x);
    printf("floor(%lf)=%lf\n",x,result);
    return 0;

    }
