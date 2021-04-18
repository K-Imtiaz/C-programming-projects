#include<stdio.h>
int main()
{
    int num1,num2, sum,avg;
    float avg1;
    double avg2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("The sum is: %d\n",sum);

    avg=sum/2;
    printf("The average number is= %d\n",avg);

    avg1=(float)sum/2; //type casting
    printf("The Float average is= %.2f",avg1);


    avg2=(double)sum/2;
    printf("The double average is= %.5lf",avg2);



    return 0;
}
