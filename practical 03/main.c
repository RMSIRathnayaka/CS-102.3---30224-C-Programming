#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    /*int a,b,max;
    printf("Enter two no:");
    scanf("%d %d",&a,&b);
    if (a>b)
    max=a;
    else
    max=b;
    printf("The highest number is %d \n",max);

    int a,b,c,l,s;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    l=a;
    if(b>l)
        l=b;
    if(c>l)
        l=c;
    s=a;
    if(b<a)
        s=b;
    if(c<a)
        s=c;
    printf("The largest number is %d\n",l);
    printf("The smallest number is %d\n",s);

    char ename[50];
    float bslry,nslry,inc;
    printf("Enter employee name:");
    scanf("%s",&ename);
    printf("Enter basic salary:");
    scanf("%f",&bslry);
    if (bslry<5000)
        inc=0.05*bslry;
    else if (bslry>=5000 && bslry<10000)
        inc=0.1*bslry;
    else
        inc=0.15*bslry;
    nslry=bslry+inc;
    printf("Employee name:%s\n",&ename);
    printf("new salary:%.2f\n",nslry);
    printf("\n");*/

    double r,d,c,a;
    printf("Enter radius of the circle: ");
    scanf("%lf",&r);
    d=2*r;
    c=2*PI*r;
    a=PI*r*r;
    printf("Diameter of circle is %.2f\n",d);
    printf("Circumference of circle is %.2f\n",c);
    printf("Area of circle is %.2f\n",a);
    return 0;
    printf("\n");

    int a,b;
    printf("Enter the first integer: ");
    scanf("%d",a);
    printf("Enter the second integer: ");
    scanf("%d",b);
    if (a%b==0){
        printf("%d is multiple of %d. \n",a,b);
    }else {
        printf("%d is not multiple of %d. \n",a,b);
    }
    printf("\n");

    printf("Integer equivalent of uppercase letters:\n");
    printf("A:%d\n",'A');
    printf("B:%d\n",'B');
    printf("C:%d\n",'C');
    printf("\nInteger equivalent of lowecase letters:\n");
    printf("a:%d\n",'a');
    printf("b:%d\n",'b');
    printf("c:%d\n",'c');
    printf("\nInteger equivalent of digits:\n");
    printf("0:%d\n",'0');
    printf("1:%d\n",'1');
    printf("2:%d\n",'2');
    printf("\nInteger equivalent of special symbols:\n");
    printf("$:%d\n",'$');
    printf("*:%d\n",'*');
    printf("+:%d\n",'+');
    printf("/:%d\n",'/');
    printf("\nInteger equivalent of blank characters:\n");
    printf("Blank:%d\n",' ');
    return 0;



}
