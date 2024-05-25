#include <stdio.h>

int main ()
{
    char a='*';
    int n;
    scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)  
    //     {
    //         printf("%c",a);
    //     }
    //     printf("\n");
    // }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    
    return 0;
}