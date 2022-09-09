#include<stdio.h>
#include<string.h>

void pyramid(int x)
{
   
    int count = x-1;
    int k=1;

    for(int i=0;i<x;i++)
    {
     char arr[46];
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
int main()
{
    int n;

    printf("Enter height of the pyramid");
    scanf("%d",&n);

    if(n > 5 || n < 2)
    {
        printf("Invalid height");
    }
    else{
       pyramid(n);
    }
    return 0;
}