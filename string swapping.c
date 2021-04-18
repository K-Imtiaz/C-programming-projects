#include<stdio.h>
int main()
{
    char str1[30]="MADAM";
    char str2[30]="Hot";
    char temp[30];
    printf("Before Swaping\n");
    printf("String 1 =%s\n",str1);
    printf("String 2 =%s\n",str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("After Swaping\n");
    printf("String 1 =%s\n",str1);
    printf("String 2 =%s\n",str2);
}
