//Array | Sum and Average of an Array by only loop "how many numbers
#include<stdio.h>
int main()
{
    int num[100],i,n;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
printf("Maximum is %d\n",max);


int min=num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
printf("Minimum is %d\n",min);






}
