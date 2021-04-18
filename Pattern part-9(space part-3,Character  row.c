/*
        A
      B B
    C C C
  D D D D
E E E E E
E E E E E
  D D D D
    C C C
      B B
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
        for(col=1;col<=n-row;col++)
        printf("  ");
        for(col=1;col<=row;col++)
        printf("# ");
        printf("\n");
}
for(row=n;row>=1;row--)
{
        for(col=1;col<=n-row;col++)
        printf("  ");
        for(col=1;col<=row;col++)
        printf("# ");
        printf("\n");
}





}



