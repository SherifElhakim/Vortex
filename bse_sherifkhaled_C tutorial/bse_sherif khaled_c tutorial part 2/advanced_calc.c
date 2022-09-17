#include<stdio.h>
int main()
{
double a,b;
char operation;

printf("Enter first Number:");
scanf("%lf",&a);

printf("Enter Operator:");
scanf(" %c",&operation);

printf("Enter second Number:");
scanf("%lf",&b);

if(operation == '+'){
    printf("%lf",a+b);
}
else if(operation == '-')  printf("%lf",a-b);

else if(operation == '*') printf("%lf",a*b);

else if(operation == '/') printf("%lf",a/b);

else printf("invalid operator"); 

    return 0;
}