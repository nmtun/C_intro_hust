#include <stdio.h>
#include <math.h>

// void xin_chao (){
//     printf("Hello world");
// }

// int main ()
// {
//     xin_chao();
// }

// int sum (int n) {
//     int tong=0;
//     for (int i = 1; i <= n; i++)
//     {
//         tong = tong +i;
//     }
//     return tong;
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
// }

// int max(int a, int b) {
//     if (a>b) return a;
//     else return b;
// }
// int main () {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("%d",max(a,b));
//     return 0;
// }

// double S (int n) {
//     double tong=0;
//     for (int i = 1; i <= n; i++)
//     {
//         tong = tong + (double)1/i;
//     }
//     return tong;
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     printf("%lf",S(n));
// }

double check(double a){
    if (a<0) printf("no");
    else {
        double x;
        x=sqrt(a);
        if ((x - (int)x) == 0)
        {
            printf("Yes");
        }
        else printf("no");
    }
    return 1;
}
int main () {
    double a;
    scanf("%lf",&a);
    check(a);
}