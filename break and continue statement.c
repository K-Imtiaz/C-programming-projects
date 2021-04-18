#include<stdio.h>
int main()
{
    int i=1;
Imtiaz:
        printf("%d\t",i);
        i++;
        if(i<11)
            goto Imtiaz;
    return 0;
}
