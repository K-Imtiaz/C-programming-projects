//Pyramid
/*
        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5


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
        printf("%d ",row%2);
        printf("\n");
    }












}
