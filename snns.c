#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i++)
    {
        printf("%d",i);
        sum=sum+i;
    }

printf("Sum= %d\n",sum);

}
