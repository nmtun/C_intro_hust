#include <stdio.h>
#include <math.h>

int check(int n) {
    while (n>0)
    {
        int t = n%10;
        n/=10;
        if (t%2==1) return 0;
    }
    return 1;
}
int main () {
    int n;
    scanf("%d",&n);
    if (check(n)==1)
    {
        printf("toan la so chan");
    }
    else printf("toan la so le");
    return 0;
}