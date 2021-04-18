#include<stdio.h>
int main()
{
    FILE *file;
    char name[20]="Imtiaz ahmed";
    int length= strlen(name);
    int i;

    fopen("Test.txt","w");
    if(file==NULL)
        printf("file doesn't exist");
    else


    printf("file has opened\n");
    for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is written successfully");
        fclose(file);


    getch();
}
