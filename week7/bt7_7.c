#include <stdio.h>
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5

int main ()
{
    for (int i = CBEGIN; i >= CLIMIT; i-=CSTEP )
    {
        printf("%d : %.2lf \n",i,(double)1.8*i+32.0);
    }
    return 0;
}