#include<stdio.h>
int main()
{
    char str[50];
    int i,digit,capital,small;

    printf("Enter a string :");
    gets(str);
    i=capital=small=digit=0;
    while((ch=str[i])!='\0')
    {
       if(str[i]>=65 && str[i]<=90)
            capital++;
          else if(str[i]>=97 && str[i]<=122)
          small++;

        else if(str[i]>=48 && str[i]<=57)
        digit++;



        i++;
    }
        word++;
        printf("Numbers of Capital letter: %d\n",capital);
        printf("Numbers of Small Letter: %d\n",small);
        printf("Numbers of digit: %d\n",digit);
getch();
}
