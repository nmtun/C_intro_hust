#include <stdio.h>
#include <math.h>

int is_prime (int a) {
    double x = sqrt(a);
    int dem=0;
    for (int i = 2; i <= (int)x; i++)
    {
        if (a%i == 0)
        {
            dem++;
        }
    }
    if (dem==0) return 1;
    else return 0;
}
// int main() {
//     int a;
//     scanf("%d",&a);
//     if (is_prime(a)==1)
//     {
//         printf("yes");
//     }
//     else printf("no");
//     return 0;
// }

int main () {
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i)==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}