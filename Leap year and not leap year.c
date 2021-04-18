#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
        printf("captipal letter");
        else if(ch>='a'&& ch<='z')
        printf("small letter");
        else
            printf("no letter");


}
