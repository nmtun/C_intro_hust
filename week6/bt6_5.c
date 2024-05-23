#include <stdio.h>

int main ()
{
    int a,b,c; 
    int min=0;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b)
    {
        min=a;
        if (min<c)
        {
            printf("%d",min);
        }
        else printf("%d",c);
    }
    else if (b>c)
    {
        printf("%d",c);
    }
    else printf("%d",b);
    return 0;
}