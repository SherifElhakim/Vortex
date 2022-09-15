
#include <stdio.h>
#include <stdlib.h>
 
///Code to draw the full pattern of the shapes///
 
typedef struct{
char shape_char;
unsigned int max_height;
}shape;
 
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
 
 
    ///Drawing Right_triangle
  if(sh.shape_char=='T' || sh.shape_char=='t')
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
 
 
 
 
void Square(shape square)
{
    int i,j;
    int l = square.max_height;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
 
            printf("*\t");
 
        }
        printf("\n\n");
    }
 
}
 
void Right_triangle(shape triangle)
{
   int i,j;
   int l = triangle.max_height;
   for(i = 1; i <= l; i++) {
      for(j = 1; j <= i; j++)
         printf("* ");
 
      printf("\n");
   }
}
 
 
void Pyramid(shape pyramid)
{
   int i,j,z;
   int l = pyramid.max_height;
    for(i = 1;i<=l;i++)
        {
        for(j = 1; j<=(l-i);j++)
        {
          printf(" ");
        }
          for(z = 1 ; z<=((2*i)-1);z++)
          {
            printf("*");
          }
       printf("\n");
} }

