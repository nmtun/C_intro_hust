#include <stdio.h>
#include <math.h>

int lap_phuong (int n) {
    int s;
    for (int i = 1; i <= n; i++)
    {
        s=i*i*i;
        printf("%d ",s);
    }
    return s;
}
int uoc (int n) {
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 1;
}
int binh_phuong (int n) {
    int s;
    for (int i = 1; i <= n; i++)
    {
        s=i*i;
        printf("%d ",s);
    }
    return s;
}

int main() {
    int n;
    scanf("%d",&n);
    lap_phuong(n);
    uoc(n);
    binh_phuong(n);
    return 0;
}