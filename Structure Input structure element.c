#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;


};

int main()
{
    struct Person person1={20,18900.50};
    struct person person2,person3;
    //element wise assaignment
    person2.age=17;
    person2.salaray=10200.40;
    //structure variable assaingment
    person3=person2;

    printf("Person 1 information \n");

    printf("Age= %d\n",person1.age);
    printf("Salary= %.2f\n",person1.salary);


    printf("Person 2 information \n");

    printf("Age= %d\n",person2.age);
    printf("Salary= %.2f\n",person2.salary);


    printf("Person 3 information \n");

    printf("Age= %d\n",person3.age);
    printf("Salary= %.2f\n",person3.salary);










    getch();
}
