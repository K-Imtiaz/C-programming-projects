#include <stdio.h>

int main()
{
   int A[10][10],transpose [10][10],result[10][10],row,col,i,j;

   printf("Enter row and column for the martix:");
   scanf("%d %d",&row,&col);

   for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
   {
       printf("A[%d][%d]=",i,j);
       scanf("%d",&A[i][j]);
       }
   }
//transpose
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {
        transpose[i][j]=A[j][i];
    }
}

   printf("\nEntered Matrix\n");
for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
   {
printf("%d ",A[i][j]);
   }
   printf("\n");
   }
//printing transpose matrix
printf("\nTranspose Matrix.\n");
for(i=0;i<col;i++)
{

    for(j=0;j<row;j++)
    {
        printf("%d ",transpose [i][j]);
    }
    printf("\n");
}



   return 0;
}








