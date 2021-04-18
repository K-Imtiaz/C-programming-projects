#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file=fopen("test.txt","r");
    if(file==NULL)
        printf("file doesn't exist");
    else
{
    printf("file has opened\n");

 while(!feof(file))
    fgets(ch,39,file);
    printf("%s\n",ch);

        }
        printf("File is written successfully");
        fclose(file);
}




