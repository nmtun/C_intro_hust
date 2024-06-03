#include <stdio.h>

int check(int arr[][20], int n){
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i == j && arr[i][j] != 1) return 0; 
            if (i != j && arr[i][j] != 0) return 0; 
        }
    }
    return 1; 
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(check(arr,n)==1) printf("Yes");
    else printf("No");
    return 0;
}