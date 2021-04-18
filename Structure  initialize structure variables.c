#include<stdio.h>
//global structure
struct Person
{
    int age;
    float salary;


};

int main()
{
    struct Person person1={28,45000.40};
    struct Person person2,person3;
    //element wise assaignment
    person2.age= 17;
    person2.salary= 10200.40;
    //structure variable assaingment
    person3=person2;

    if(person2.age==person3.age && person2.salary==person3.salary)
        printf("Person 2,3 age and salary are queal");
    else
        printf("Person 2,3 age and salary are not queal");








    getch();
}
