#include <stdio.h>

int countEven(int *a, int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (*(a+i)%2==1)
            count++;
    }
    return count;
}
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("%d",countEven(arr,n));
    return 0;
}

