#include <stdio.h>

int main ()
{
    int diem,dem=0,tong=0;
    while (1)
    {
        scanf("%d",&diem);
        dem=dem+1;
        tong=tong+diem;
        if (diem<0)
        {
            break;
        }
    }
    double tb = (double)tong/dem;
    printf("%.2lf\n",tb); 
    printf("%d %d",dem,tong);
    return 0;
}