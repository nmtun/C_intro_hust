#include <stdio.h>

void getSale(int *a, int n){
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}
int totalSale(int *a,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+*(a+i);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    getSale(arr,n);
    printf("%d",totalSale(arr,n));
    return 0;
}