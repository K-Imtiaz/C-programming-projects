#include<stdio.h>
int main()
{
    FILE *file;
    char name[25];
    int age;
    file=fopen("test.txt","a");
    if(file==NULL)
    {
        printf("file doesn't exist");
    }

    else


    printf("file has opened\n");
    printf("Enter your full name:");
    gets(name);

    printf("Enter your age:");
    scanf("%d",&age);
    fprintf(file,"Name: %s, Age: %d\n",name,age);
        printf("File is written successfully\n");
        fclose(file);


    getch();
}
