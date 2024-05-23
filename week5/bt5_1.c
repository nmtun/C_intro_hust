#include <stdio.h>

double a;
int main ()
{
    printf("Nhap so kilomet: ");
    scanf("%lf",&a);
    double b = 0.621371*a;
    printf("Ket qua la: %lf",b);
    return 0;
}