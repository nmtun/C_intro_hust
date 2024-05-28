#include <stdio.h>

void nhap_mang(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main (){
    int n,arr[100]; // n <= 100
    scanf("%d",&n);
    nhap_mang(arr,n);
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}