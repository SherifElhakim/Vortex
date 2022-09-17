#include<stdio.h>
#include<string.h>
int main(void)
{
char SecretVegetable[]="btates";
char guess[50];
int GuessCount=3;
int flag=0;

while(strcmp(SecretVegetable,guess) != 0 && flag == 0)
{
    if(GuessCount>0)
    {
    printf("Guess a Vegetable (%d Guesses left):\n",GuessCount);
    gets(guess);
    GuessCount--;
    }
    else
    {
    flag=1; break;
    }
}

if(flag==1) printf("You ran out of guesses :(");
else printf("You Win!");
    return 0;
}