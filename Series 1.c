//1+2+3+......+N (1 block difference)
//1+3+5+.....+N (2 block difference)
#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("Enter the last number of the series:");
    scanf("%d",&n);
    printf("1 + 3+ 5+ ......+ %d",n);
while(a<=n)
{
    sum=sum+a;
    a=a+2;

}
printf("= %d\n",sum);





}
