
#include <stdio.h>
#include <stdlib.h>
 
///Code to draw the outer surface of the shapes///
 
typedef struct{
char shape_char;
unsigned int max_height;
}shape;
 
void Rect(shape);
void Right_triangle(shape);
void Square(shape);
void Pyramid(shape);
void Circle(shape);
 
 
 
int main()
{
    shape sh;
    printf("Enter your shape!\n");
    scanf("%c",&sh.shape_char);
    printf("Enter your max height!\n");
    scanf("%d",&sh.max_height);
 
    ///Drawin Rectangle
   if(sh.shape_char=='R' ||sh.shape_char== 'r')
    {
        Rect(sh);
    }
    ///Drawing Right_triangle
  else if(sh.shape_char=='T' || sh.shape_char=='t')
    {
        Right_triangle(sh);
    }
    ///Drawing Square
   else if(sh.shape_char=='S' ||sh.shape_char== 's')
    {
        Square(sh);
    }
    ///Drawing Pyramid
   else if(sh.shape_char=='P' ||sh.shape_char== 'p')
    {
       Pyramid(sh);
    }
    ///Drawing Circle
   else if(sh.shape_char=='C' || sh.shape_char=='c')
    {
        Circle(sh);
    }
    else
 
    {
 
    printf("Enter a valid character");
 
    }
    return 0;
}
 
void Rect(shape rect)
{
    int i,j,length;
    int h = rect.max_height;
    printf("Enter the length of Rectangel\n");
    scanf("%d",&length);
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=h;j++)
        {
            if(i==1 || i==length || j==1 || j==h)
            printf("*\t");
            else
                printf("\t");
        }
        printf("\n\n");
    }
 
}
 
void Right_triangle(shape triangle)
{
  int i,j;
  int l = triangle.max_height;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
           if((j==1) || (i==l) || (j==i))
           printf("*\t");
           else
           printf("\t");
        }
        printf("\n\n");
    }
}
 
void Square(shape square)
{
    int i,j;
    int l = square.max_height;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            if(i==1 || i==l || j==1 || j==l)
            printf("*\t");
            else
                printf("\t");
        }
        printf("\n\n");
    }
}
 
void Pyramid(shape pyramid)
{
   int i,j;
   int l = pyramid.max_height;
    for(i=1;i<=l;i++)
    {
        for(j=i;j<l;j++)
        {
            printf("\t");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1 || i==l || j==(2*i-1))
            printf("*\t");
            else
                printf("\t");
        }
        printf("\n\n");
    }
 
}
 
 
void Circle(shape circle)
{
    int r = circle.max_height/2;
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

