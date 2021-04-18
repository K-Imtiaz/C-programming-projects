#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature conversion menu\n");

    printf("1.fahrenheit to celsius");
    printf("2.celsius to fahrenheit");
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
    case 2:
        {

            printf("enter the Celcius temparature:");
            scanf("%f",&temp);
            convertedtemp=(temp*1.8)+32;
            printf("Fahrenheit temperature is %f\n",convertedtemp);

}

return 0;
}

