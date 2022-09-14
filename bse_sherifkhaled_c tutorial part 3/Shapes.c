#include<stdio.h>

struct Shape 
{
char name;
int size;
};

void Circle(int l)
{
    int r=l/2;
    int N = 2*r+1;
    int x, y; 
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            x = i-r;
            y = j-r;
 
            if (x*x + y*y <= r*r+1 )
                printf("*");
            else 
                printf(" ");
            printf(" ");
        }
        printf("\n");
    }
}

void Pyramid(int x)
{
int count = x-1;
    int k=1;

    for(int i=0;i<x;i++)
    {
     char arr[1024];
     int index=0;
     for(int j = 1 ; j<=count;j++) {arr[index++]=' ' ;}; 
     for(int l=1;l<=k;l++) {arr[index++]='*'; }
     arr[index]=0;
     count--;
     k=k+2;
     puts(arr);
     printf("\n");
    }
}

void Square(int x)
{
   for(int i=0;i<=x-1;i++)
   {
    for(int j=0;j<=x-1;j++)
    {
        printf("* ");
    }
    printf("\n");
   }  
}

void Triangle(int x)
{
for(int i=0;i<=x-1;i++)
{
    for(int j=0;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
}

int main(void)
{
struct Shape myShape;
char InputShape;
int InputSize;

printf("Enter the character representing the shape:\n");
scanf("%c",&InputShape);

myShape.name=InputShape;

if(InputShape == 'c')
{
int dia;

printf("Enter the diameter of the circle:\n");
scanf("%d",&dia);

myShape.size = dia; 

Circle(myShape.size);
}

else if(InputShape == 's')
{
int side;

printf("Enter the side length of the sqaure:\n");
scanf("%d",&side);

myShape.size = side;

Square(myShape.size);
}

else if(InputShape == 't')
{
int height;

printf("Enter the height of the triangle:\n");
scanf("%d",&height);

myShape.size = height;

Triangle(myShape.size);
}

else if(InputShape == 'p')
{
int height;

printf("Enter the height of the pyramid:\n");
scanf("%d",&height);

myShape.size = height;

Pyramid(myShape.size);
}

else
{
printf("Enter a valid character");
}
    return 0;
}