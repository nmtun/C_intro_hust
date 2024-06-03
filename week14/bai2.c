#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int arr[30];
    for (int i = 0; i < n; i++)
    {
        arr[0]=0; 
        arr[1]=1;
        if(i>=2) arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[n-1]);
        break;
    }
    return 0;
}