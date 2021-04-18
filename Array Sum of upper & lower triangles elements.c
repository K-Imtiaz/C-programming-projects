#include<stdio.h>

void main()
{
    int mat[12][12];
    int i,j,row,col,upperSum=0,lowerSum=0;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //To add diagonal elements
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<j)
            {
                upperSum=upperSum+mat[i][j];
            }
            if(i>j)
                lowerSum=lowerSum+mat[i][j];
        }
    }

    printf("The sum upper triangle elements = %d\n",upperSum);
    printf("The sum lowerSum triangle elements = %d\n",lowerSum);
}

