#include <stdio.h>

int main()
{
   int first[10][10],second [10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

   printf("Enter row and column for first martix:");
   scanf("%d %d",&r1,&c1);
   printf("Enter row and column second martix:");
   scanf("%d %d",&r2,&c2);
   while(c1!=r2)
   {
       printf("Error !! column of the first matrix not equal to row of second\n");
       printf("Enter row and column for first martix:");
       scanf("%d %d",&r1,&c1);
       printf("Enter row and column second martix:");
       scanf("%d %d",&r2,&c2);

   }
   //taking input for the first matrix
   printf("\nEnter elements for the first matrix:");
   for(i=0;i<r1;i++)
   {
    for(j=0;j<c1;j++)
   {
       printf("first [%d][%d]= ",i,j);
       scanf("%d",&first[i][j]);
   }

   }

   //taking input for the second matrix
   printf("\nEnter elements for the second matrix:");
   for(i=0;i<r2;i++)
   {

    for(j=0;j<c2;j++)
    {
        printf("second [%d][%d]= ",i,j);
        scanf("%d",&second[i][j]);
    }

   }
   for(i=0;i<r1;i++)
   {
       for(j=0;j<c2;j++)
       {
           for(k=0;k<c2;k++)
           {
               sum=sum+first[i][k]*second[k][j];
           }
           result [i][j]=sum;
               sum=0;
       }
   }

    //printing first matrix
    printf("\n\nFirst Matrix\n");
    for(i=0;i<r1;i++)
    {
    for(j=0;j<c1;j++)
    printf("%d ",first[i][j]);
    printf("\n");
    }

   //printing Second matrix
    printf("\n\second Matrix\n");
    for(i=0;i<r2;i++)
    {


    for(j=0;j<c2;j++)
    printf("%d ",second[i][j]);
    printf("\n");
    }
    //printing result matrix
    printf("\n\nResult Matrix\n");
    for(i=0;i<r2;i++)
    {


    for(j=0;j<c2;j++)
    printf("%d ",result[i][j]);
    printf("\n");
    }



   return 0;
}




