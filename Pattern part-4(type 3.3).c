/*
A
A B
A B C
A B C D
A B C
A B
A
*/
#include<stdio.h>
int main()
{
  int n,row,col;
  printf("Enter n=");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
{
         for(col=1;col<=row;col++)

    {
     printf("* ");
    }
    printf("\n");
}


   for(row=n-1;row>=1;row--)

      {
          for(col=1;col<=row;col++)

          {
           printf("* ");
           }
       printf("\n");
       }

}

