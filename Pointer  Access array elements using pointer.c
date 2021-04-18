#include<stdio.h>
int main()
{
    FILE *file;
    fopen("Test.txt","w");
    if(file==NULL)
        printf("file doesn't exist");
    else
        printf("file has opened");
        fclose(file);


    getch();
}
