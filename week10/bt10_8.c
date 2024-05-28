#include <stdio.h>

void nhap_mang(double a[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&a[i]);
    }
}
int main(){
    int n; 
    double arr[100];
    scanf("%d",&n);
    nhap_mang(arr,n);
    int tmp;
    for (int i = 0; i < n/2; i++)
    {
        tmp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=tmp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ",arr[i]);
    }
    return 0;
}