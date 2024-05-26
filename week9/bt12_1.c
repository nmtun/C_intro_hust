#include <stdio.h>
#include <math.h>

double eng (double m, double v) {
    double k;
    k = m * v * v / 2;
    return k;
}
int main () {
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.2lf",eng(a,b));
    return 0;
}

