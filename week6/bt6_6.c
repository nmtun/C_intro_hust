#include <stdio.h>

int main()
{
    char xe;
    double time;
    printf("Nhap loai xe: "); scanf("%c",&xe);
    printf("Nhap so gio: "); scanf("%lf",&time);
    
    if (time - (int)time == 0) time = (int)time;
    else time = (int)time + 1;

    if (xe == 'C')
    {
        if (time <= 2)
        {
            printf("Phi gui la: %.2lf",0.7*time);
        }
        else printf("Phi gui la: %.2lf",0.7*2 + 2.5*(time - 2));
    }
    if (xe == 'B')
    {
        if (time <= 2)
        {
            printf("Phi gui la: %.2lf",1.5*time);
        }
        else printf("Phi gui la: %.2lf",1.5*2 + 2*(time - 2));
    }
    if (xe == 'T')
    {
        if (time <= 1)
        {
            printf("Phi gui la: %.2lf",2.5*time);
        }
        else printf("Phi gui la: %.2lf",2.5 + 3.25*(time - 1));
    }
    
    return 0;
}