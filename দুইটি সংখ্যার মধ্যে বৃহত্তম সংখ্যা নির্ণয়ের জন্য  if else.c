#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter number 1 and number 2:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("large");
    else if(num1<num2)
        printf("small");
        else
            printf("Equal");
}
