#include <stdio.h>

// void dao_nguoc_mang(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int tmp;
//     for (int i = 0; i < n/2; i++)
//     {
//         tmp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=tmp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

void dao_nguoc_mang(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int tmp;
    for (int i = 0; i < n/2; i++)
    {
        tmp=*(a+i);
        *(a+i)=*(a+n-i-1);
        *(a+n-i-1)=tmp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(a+i));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    dao_nguoc_mang(arr,n);
    return 0;
}