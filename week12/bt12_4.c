#include <stdio.h>

void mang_con(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n;i++)
    {
        printf("\n%d",*(a+i));
        for(int j=i; j<n-1; j++)
        {
            printf("\n");
            for(int k=i; k<=j+1; k++)
                printf("%d ",*(a+k));
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[100];
    mang_con(arr,n);
    return 0;
}