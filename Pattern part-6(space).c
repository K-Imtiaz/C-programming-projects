/*


*/
#include<stdio.h>
int main()
{
  int n,row,col;
  printf("Enter n=");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
{
         for(col=1;col<=n-row;col++)

    {
        //space print
     printf("  ");
    }

for(col=1;col<=row;col++)

          {
              //printing number
           printf("%d ",row);
           }
       printf("\n");

    }
}



