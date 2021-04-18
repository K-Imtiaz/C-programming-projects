#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("enter any positve number:");
    scanf("%d,&num");
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        count++;
        break;

        }

    if (count==0)
        print("Prime number\n");
    else
        printf("not prime number");

    return 0;
}
