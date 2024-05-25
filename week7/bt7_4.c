#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int dem = 0; 
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                dem++;
            }
        }
        if (dem == 0 && i > 1)
            printf("%d ",i);
    }
    return 0;
}