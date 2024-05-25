#include <stdio.h>

int main ()
{
    int dem=0;
    for (int i = 0; i < 100; i++)
    {
        if (i>27)
        {
            dem+=1;
        }
    }
    printf("%d",dem);
}