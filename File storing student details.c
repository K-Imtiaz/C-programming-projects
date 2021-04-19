#include<stdio.h>
int main()
{
FILE*file;
char name[20];
int age,phoneNumber,num,i;
file=fopen("test.txt","a");
if(file==NULL)
{
    printf("File does not exist");

}
else
{
    printf("File has opended\n");
    printf("Enter number of student: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
{
printf("Enter student name: ");
scanf("%s",&name);

    printf("Enter student age: ");
scanf("%d",&age);
    printf("Enter phone number: ");
scanf("%d",&phoneNumber);
}
    fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phoneNumber);
}
fclose(file);





getch();
}
