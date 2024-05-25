#include <stdio.h>

int main ()
{
    int x,y;
    for ( x = 1; x <= 36; x++)
    {
        for ( y = 1; y <= 36-x; y++)
        {
            if (x+y==36 && 4*x+2*y==100)
            {
                printf("%d %d",x,y);
            }
        }
    }
    return 0;
}