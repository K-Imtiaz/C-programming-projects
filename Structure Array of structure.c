#include<stdio.h>
//global structure
struct Person
{
    char name[50];
    int age;
    float salary;


};

int main()
{
    struct Person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<4;i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("Age : ",person[i].age);

        printf("Salary : ",person[i].salary);

    }




    getch();
}
