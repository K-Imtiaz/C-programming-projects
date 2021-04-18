//Pyramid
/*
A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A
*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            //printing spaces
            printf("  ");
        //printing star
        for(col=1;col<=2*row-1;col++)
        printf("%c ",col+64);
        printf("\n");
    }
for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
            //printing spaces
            printf("  ");
        //printing star
        for(col=1;col<=2*row-1;col++)
        printf("%c ",col+64);
        printf("\n");
    }












}
