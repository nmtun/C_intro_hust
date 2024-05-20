#include <stdio.h>
#define PI 3.142
int main () {
    double r,c,ac,as,v;
    r = 5.678;
    printf("Radius = %f\n", r);
    c = 2.0 * PI * r;
    printf("Circle's circumference = %f\n", c);
    ac = PI * r * r;
    printf("Circle's area = %f\n", ac);
    as = 4.0 * PI * r * r;
    printf("Sphere's area = %f\n", as);
    v = 4.0/3.0 * PI * r * r * r;
    printf("Sphere's volume = %f\n", v);
}