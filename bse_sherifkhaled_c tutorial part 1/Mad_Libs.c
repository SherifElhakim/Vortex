#include<stdio.h>
#include<string.h>
int main(void)
{
char colour[20];
char plural_noun[20];
char celebrity[20];

printf("Enter a colour:\n");
gets(colour);

printf("Enter a plural noun:\n");
gets(plural_noun);

printf("Enter a name of a celebrity:\n");
gets(celebrity);

printf("Roses are %s\nViolets are %s\nI love %s",colour,plural_noun,celebrity);
    return 0;
}