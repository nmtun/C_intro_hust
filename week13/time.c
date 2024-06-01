#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[100],b[100],c[100],d[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d:%d",&a[i],&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d:%d",&c[i],&d[i]);
    }
    int start=0,end=0,kq=0;
    for (int i = 0; i <n; i++)
    {
        start= start + (a[i]*60 + b[i]);
        end= end + (c[i]*60 + d[i]);
        
    }
    kq = end - start;
    printf("%d:%d",kq/60,kq%60);
    return 0;
}