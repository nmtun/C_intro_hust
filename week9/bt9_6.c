#include <stdio.h>
#include <math.h>

double nhiet_do(double a) {
    double b;
    b = (double) 5 / 9 * (a-32);
    printf("%.2lf",b);
    return b;
}
int main () {
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ",i); nhiet_do(i);
        printf("\n");
    }
    return 0;
}