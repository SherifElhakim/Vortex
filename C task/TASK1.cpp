#include<stdio.h>
int main()
{
double a,b,c;
double avg,sum;
printf("Enter 3 Numbers:\n");
while(scanf("%lf%lf%lf",&a,&b,&c))
{

sum=a+b+c;
avg=sum/3;

printf("The Sum of the 3 Numbers is: %lf\nThe Average of the 3 Numbers is: %lf\n",sum,avg);

printf("Enter 3 Numbers:\n");

}
    return 0;
}
