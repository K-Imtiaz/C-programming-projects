//1^2+2^2+3^2+.....+n^2
#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter n=");
    scanf("%lf",&n);
    for(i=1 ; i<=n; i=i++)
    {
        sum=sum+(1/i);
    if(i==1)
        printf("\n1 +");
    else if(i==n)
    printf("(1/%lf)",i);
    else
        printf("(1/%lf + )",i);
    }

printf("= %.2lf\n",sum);

}

