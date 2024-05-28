#include <stdio.h>

int sap_xep(int arr[], int n){
    int tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }    
    }
    return 1;
}
int check(int arr[], int n){
    sap_xep(arr,n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==1) printf("%d ",arr[i]);
    }
    return 1;
}
int main () {
    int n, arr[10];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sap_xep(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    check(arr,n);
    return 0;
}