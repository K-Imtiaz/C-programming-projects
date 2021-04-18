#include<stdio.h>
int main()
{
    int x=10,y=20,sum,sub,mul,div,rem;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    sum = *ptr1 + *ptr2;
    sub = *ptr1 - *ptr2;
    mul = *ptr1 * *ptr2;
    div = *ptr1 / *ptr2;
    rem = *ptr1 % *ptr2;



    printf("Sum= %d\n",sum);
    printf("Subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mul);
    printf("Division= %d\n",sum);
    printf("Remainder= %d\n",rem);


    getch();
}
