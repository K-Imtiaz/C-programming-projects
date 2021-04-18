//Array | Fibonacci series using array
#include<stdio.h>
int main()
{
    int num[]={10,2,4,16,15,85};
    int value,pos=-1,i;

    printf("Enter the value you want to search:");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        {
            if(value==num[i])
            {
                pos=i+1;
                break;
            }
        }
        if(pos==-1)
        {
            printf("Item is not found");
        }
        else{
            printf("The value is found at %d position",pos);
         }


    }







}
