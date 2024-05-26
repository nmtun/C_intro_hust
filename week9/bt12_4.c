#include <stdio.h>
#include <math.h>

double salary (double a, double b) {
    if ((a+b)<10 || (a+b)>=65) return 0;
    else {
    double sum;
    sum = 15000*a + 1.5*15000*b;
    return sum;
    }
}
int main () {
    double a,b;
    printf("Nhap so gio lam chinh, lam them: ");
    scanf("%lf%lf",&a,&b);
    printf("Tien luong la: %.2lf",salary(a,b)); 
    return 0;
}