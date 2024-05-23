#include <stdio.h>

int main ()
{
    double a;
    scanf("%lf",&a);
    if ((0 <= a && a < 90) || a==360)
    {
        printf("north (heading) east");
    }
    else if (90<=a && a<180)
    {
        printf("south (180.0-heading) east");
    }
    else if (180<=a&&a<270)
    {
        printf("south (heading - 180.0) west");
    }
    else
    {
        if (270<=a&&a<360)
        {
            printf("north (360.0 - heading) west");
        }
    }
    return 0;
}