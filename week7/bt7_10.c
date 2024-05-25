#include <stdio.h>

int main ()
{
    int n,dem=0;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j==0)
            {
                dem=dem+j;
            }
        }
        if (dem==i)
        {
            printf("%d ",i); 
        }
    }
    return 0;
}