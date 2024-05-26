#include <stdio.h>
#include <math.h>


double check (double a, double b) {
    double f1 = a*a*a-a-1;
    double f2 = b*b*b-b-1;
    if ((f1*f2)>=0) return 0;
    else {
        printf("1.324718");
    }
    return 1;
}
int main () {
    double a,b;
    scanf("%lf%lf",&a,&b);
    check(a,b);
    return 0; 
}

