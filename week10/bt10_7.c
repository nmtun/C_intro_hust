#include <stdio.h>
//#include <stdbool.h>

void nhap_mang(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
// bool check(int arr[], int n){
//     for (int i = 0; i < n/2; i++)
//     {
//         if (arr[i]!=arr[n-i-1]) return false;
//     }
//     return true;
// }
int check(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        if (arr[i]!=arr[n-i-1]) return 0;
    }
    return 1;
}

int main () {
    int n; 
    scanf("%d",&n);
    int arr[100];
    nhap_mang(arr,n);
    if (check(arr,n)==1) printf("mang doi xung");
    else printf("mang khong doi xung");
    return 0;
}