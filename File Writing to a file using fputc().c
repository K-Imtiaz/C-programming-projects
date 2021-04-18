#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file=fopen("test.txt","w");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }

    else


    printf("file has opened\n");
    printf("Enter your full name:");
    gets(name);

    fputs(name,file);
        printf("File is written successfully\n");
        fclose(file);


    getch();
}
