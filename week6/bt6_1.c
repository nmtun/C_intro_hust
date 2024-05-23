#include <stdio.h>

int main ()
{
    char a1,a2,a3;
    scanf("%s%s%s",&a1,&a2,&a3);
    int min=0;
    if (a1<a2)
    {
        min=a1;
        if (min<a3)
        {
            printf("%s",min);
        }
        else printf("%s",a3);
    }
    else
    {
        if (a2<a3)
        {
            printf("%s",a2);
        }
        else printf("%s",a3);
    }
}