#include<stdio.h>
int main()
{
float marks;
printf("Enter your marks:");
scanf("%f",&marks);

if (marks>=80)
    printf("A+");
else if (marks>=70)
    printf("A");
  else  if (marks>=60)
    printf("A-");
   else if (marks>=50)
    printf("b");
    else if (marks>=40)
    printf("c");
    else if(marks<33)
    printf("Fail");

}
