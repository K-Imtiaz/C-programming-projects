//a b c
//a b
//a
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N:");
    scanf("%c",&n);
    for(row=n;row>=1;row--)
    {

         for(col=1;col<=row;col++)
    {
        printf("%c ",col);
    }
    printf("\n");

    for(row=1;row<=n;row++)
    {

         for(col=1;col<=row;col++)
    {
        printf("%c",row);
    }
    printf("\n");
    }
    }
}
