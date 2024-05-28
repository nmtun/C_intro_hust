#include <stdio.h>

int check(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        scanf("%d",&arr2[j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i]==arr2[j]) return 1;
            else return 0;
        }
    }
    return 1;
}
int main (){
    int n, arr1[100], arr2[100];
    scanf("%d",&n);
    if (check(arr1,arr2,n)==1)
    {
        printf("1");
    }
    else printf("0");
    return 0;
}