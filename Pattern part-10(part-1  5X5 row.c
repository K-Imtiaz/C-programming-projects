/*
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1


*/
#include<stdio.h>
int main()
{
  int n,row,col;
  printf("Enter n=");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
{
        for(col=1;col<=n;col++)
        printf("%c ",row+64);
        printf("\n");
}





}


