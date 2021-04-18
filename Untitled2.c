#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("test.txt","r");
    if(file==NULL)
        printf("file doesn't exist");
    else
{
    printf("file has opened\n");
 while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
        printf("File is written successfully");
        fclose(file);
}

    getch();
}
