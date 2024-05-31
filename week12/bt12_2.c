#include <stdio.h>

double *maximum(double *a, int size){
    if(size==0) return NULL;
    if(size!=0){
        int max=a[0];        
        for (int i = 0; i < size; i++)
        {
            if(a[i]>max) max=a[i];
        }
        *a=max;
        return a;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    double arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&arr[i]);
    }
    double *dress;
    dress=maximum(arr,n);
    printf("%p",dress);
    return 0;
}