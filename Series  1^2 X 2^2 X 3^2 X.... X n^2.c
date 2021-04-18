//Series | 1^2 X 2^2 X 3^2 X.... X n^2
#include<stdio.h>
int main()
{
    int result=1,n,i;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1 ; i<=n; i=i+2)
    {
        result=result*i*i;
    }

printf("Result= %d\n",result);
return 0;

}

