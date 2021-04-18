#include<stdio.h>
//global structure
struct Person
{
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
        printf("Enter age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<4;i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Age : ",person[i].age);

        printf("Salary : ",person[i].salary);

    }




    getch();
}
