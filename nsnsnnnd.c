#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature conversion menu\n");

    printf("1.fahrenheit to celsius\n");
    printf("2.celsius to fahrenheit\n");
    printf("Enter your choice:");
    scanf("%d",choice);
    switch(choice)
    {
    case 1:
           {
            printf("enter the Fahrenheit temparature");
            scanf("%f",&temp);
            convertedtemp=(temp-32)/1.8;
            printf("celsius temperature is %f",convertedtemp);
            }
    break;
    case 2:
            {

            printf("enter the Celcius temparature:");
            scanf("%f",&temp);
            convertedtemp=(1.8*temp)+32;
            printf("Fahrenheit temperature is %f\n",convertedtemp);

            }

}
    }


