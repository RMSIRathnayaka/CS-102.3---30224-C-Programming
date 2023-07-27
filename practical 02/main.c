#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Hi,How old are you?");
    scanf("%d",&age);
    printf("\n");
    printf("\n");
    printf("WELCOME%d\n",age);
    printf("LET'S BE FRIENDS!");
    printf("\n");


    printf("%10d%5d%5d\n", 2, 4, 8); //Right Align
    printf("%10d%5d%5d\n", 3, 9, 27);
    printf("%10d%5d%5d\n", 4, 16, 64);


    int dis,time;
    float avg;
    printf("Enter distance");
    scanf("%d",&dis);
    printf("Enter time");
    scanf("%d",&time);
    avg=dis/time;
    printf("Average Speed is%3f m/s\n",avg);


    float f,c,t;
    printf("Enter temperature in Fahrenheit");
    scanf("%f",&f);

    t=(f-32);
    c=(t*0.55);

    printf("Temperature is Celsius: %.3f\n",c);
    return 0;

}
