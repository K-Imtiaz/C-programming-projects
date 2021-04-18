#include<stdio.h>
int main()
{
   //scanning A matrix
    int i,j,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],C[10][10];
    printf("Enter number of rows and cols: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

printf("Enter elements for A matrix.\n");
   for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        //scanning B matrix
printf("\n\n Enter elements for B matrix.\n");
   for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        //printing A matrix
    printf("A = ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",A[i][j]);
        }
printf("\n");

    }
     //printing B matrix
    printf("B = ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",B[i][j]);
        }
printf("\n");


getch ();
}
    }
}
    }

