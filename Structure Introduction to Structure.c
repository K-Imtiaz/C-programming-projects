#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;


};

int main()
{
    struct Person person1,person2;

    printf("Person 1 information \n");

    printf("Enter age :");
    scanf("%d",&person1.age);


     printf("Enter salary:");
    scanf("%f",&person1.salary);

    printf("Age= %d\n",person1.age);
    printf("Salary= %.2f\n",person1.salary);




printf("Person 2 information: \n");

printf("Enter age :");
    scanf("%d",&person2.age);


     printf("Enter salary:");
    scanf("%f",&person2.salary);

    printf("Salary= %.2f\n",person2.salary);
    printf("Age= %d\n",person2.age);









    getch();
}
