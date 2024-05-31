#include <stdio.h>
#define const 100

int check(int a[], int n){
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0 || a[i]>n || a[i]==a[i+1]) dem++;
    }
    return dem;
}
int main(){
    int n;
    scanf("%d",&n);
    int a,arr[const];
    while (n--){
        scanf("%d",&a);
        for (int i = 0; i < a; i++){
            scanf("%d",&arr[i]);
        }
        int tmp;
        for (int i = 0; i < a; i++){
            for (int j = 0; j < a; j++){
                if(arr[i]>arr[j]){
                    tmp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=tmp;
                }
            }
        }
        if(check(arr,a)==0) printf("1");
        else printf("0");
        printf("\n");
    }
    return 0;
}







