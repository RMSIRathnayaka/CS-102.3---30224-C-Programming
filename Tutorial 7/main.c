#include <stdio.h>
#include <stdlib.h>
void calculate()
{
    int a,b,sum,diff;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    printf("The sum is %d \n",sum);
    printf("The different is %d \n",diff);
}
int main()
{
    calculate();

}

void cal(int a,int b)
{
   int sum,diff;
   sum=a+b;
   diff=a-b;
   printf("The sum is %d\n",sum);
   printf("The different is %d\n",diff);
}
int main()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    cal(x,y);
}

int product(int a,int b)
{
    int prod=a*b;
    return prod;
}
int main()
{
    int x,y;
    printf("Enter 2 numbers ");
    scanf("%d %d",&x,&y);
    printf("The product is %d\n",product(x,y));
}

int quotient(int a,int b)
{
    int quo=a/b;
    return quo;
}
int main()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    printf("The quotient is %d\n",quotient(x,y));
}


void findsum()
{
    int x,y,sum;
    printf("Enter  two numbers ");
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("The sum is %d\n",sum);
}
int main()
{
    findsum();
}


void cal(int a,int b)
{
   int sum,diff,prod;
   sum=a+b;
   diff=a-b;
   prod=a*b;
   printf("The sum is %d\n""The different is %d\n""The product is %d\n",sum,diff,prod);
}
int main()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    cal(x,y);
}


double calculate(int a,float b)
{
    double product=a*b;
    return product;
}
int main()
{
    int x;
    float y;
    printf("Enter 2 numbers ");
    scanf("%d %f",&x,&y);
    printf("The product is %.2lf\n",calculate(x,y));
}
