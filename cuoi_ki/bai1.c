#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[100];
    if(n<60){
        for (int i = 0; i < 100; i++){
            scanf("%d",&arr[i]);
            if(arr[i]==-1) break;
            sum+=arr[i];
        }
        if(sum<10000) printf("%d",10000-sum);
        else printf("0");
    }
    if(n>=60){
        for (int i = 0; i < 100; i++){
            scanf("%d",&arr[i]);
            if(arr[i]==-1) break;
            sum+=arr[i];
        }
        if(sum<8000) printf("%d",8000-sum);
        else printf("0");
    }
    return 0;
}