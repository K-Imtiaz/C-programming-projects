#include<stdio.h>
int main()
{
int a[20],i,x,n;
printf("How many values: ");
scanf("%d",&n);

printf("Enter array elements: ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

printf("Element to search: ");
scanf("%d",&x);

for(i=0;i<n;++i)
    if(a[i]==x)
    break;
if(i<n)
    printf("Element is found at %d posoition",i);
    else
    printf("Elements is not found");













}
