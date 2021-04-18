/*
5 5 5 5 5
  4 4 4 4
    3 3 3
      2 2
        1

*/
#include<stdio.h>
int main()
{
  int n,row,col;
  printf("Enter n=");
  scanf("%d",&n);
  for(row=n;row>=1;row--)
{
         for(col=1;col<=n-row;col++)

    {
        //printing number
     printf("  ");
    }

for(col=1;col<=row;col++)

          {
              //printing space
           printf("%d ",col%2);
           }
       printf("\n");

    }
}



