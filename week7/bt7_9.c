#include <stdio.h>

int main ()
{
    int n; scanf("%d",&n);
    int dem=1;
    if (n==0)
    {
        printf("1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            dem=dem*i;
        }
        printf("%d",dem);
    }
    return 0;
}