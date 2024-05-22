#include <stdio.h>

int main ()
{
    double pi=3.14;
    double a;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf",&a);
    //printf("Chu vi hinh tron la: %.3lf \nDien tich hinh tron la: %.3lf",2*pi*a,pi*a*a);
    printf("Dien tich xung quanh la: %.3lf \nThe tich la: %.3lf",4*pi*a*a,(double)(4/3)*pi*a*a*a);
    return 0;
}