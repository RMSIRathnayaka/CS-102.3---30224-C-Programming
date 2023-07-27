#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Sachini Rathnayaka\n");
    printf("Badulla Central College\n");
    printf("\n");

    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    printf("\n");


    int Int;
    float Float;
    double Double;
    char Char;
    printf("Enter an integer: ");
    scanf("%d",&Int);
    printf("Enter a float: ");
    scanf("%f",&Float);
    printf("Enter a double: ");
    scanf("%1f",&Double);
    printf("Enter a character: ");
    scanf("%c",&Char);
    printf("\nValues entered:\n");
    printf("Integer: %d\n",Int);
    printf("Float: %f\n",Float);
    printf("Double: %1f\n",Double);
    printf("Character: %c\n",Char);
    printf("\n");


    int a,b,total;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    total=a+b;
    printf("Total is %d\n",total);
    printf("\n");

    float a,b,avg;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    avg=(a+b)/2;
    printf("Average is %.2f\n",avg);
    printf("\n");


    char stname[20];
    int byear,age;
    printf("Enter student name:");
    scanf("%s",&stname);
    printf("Enter birth year:");
    scanf("%d",&byear);
    age=2023-byear;
    printf(“%s\n”,stname);
    printf("%d\n",age);
    printf("\n");


    int a,b;
    printf("Enter number one:");
    scanf("%d",&a);
    printf("Enter number two:");
    scanf("%d",&b);
    printf("Number one: %d\n",b);
    printf("Number two: %d\n",a);
    printf("\n");


    printf("The color:%s\n","blue");
    printf("First number:%d\n",12345);
    printf("Second number:%04d\n",25);
    printf("Third number:%i\n",1234);
    printf("Float number:%3.2f\n",3.14159);
    printf("Hexadecimal:%x\n",255);
    printf("Octal:%o\n",255);
    printf("Unsigned value:%u\n",150);
    printf("Just print the percentage sign %%\n",10);




}
