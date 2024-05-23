#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int r=rand()%10 + 1;
    printf("guess number between 1 and 10\n");
    printf("enter your number: ");
    int b; scanf("%d",&b);
    if (r==b)
    {
        printf("you are correct");
    }
    else if (b<r)
    {
        printf("your number is too small\n");
        printf("correct number is %d",r);
    }
    else
    {
        printf("your number is too large\n");
        printf("correct number is %d",r);
    }
    return 0;
}