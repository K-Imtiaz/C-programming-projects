#include<stdio.h>
//global structure
struct Person
{
    char name[20];
    int age;
    float salary;


};
void display(struct Person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %.2f\n",p.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Imtiaz Ahmed");
    person1.age=23;
    person1.salary=16900;
    display(person1);
printf("\n");

    strcpy(person2.name,"Imtiaz");
    person2.age=27;
    person2.salary=96900;
    display(person2);



    getch();
}
