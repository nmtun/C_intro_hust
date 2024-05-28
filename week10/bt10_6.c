#include <stdio.h>

void nhap_mang(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
int main () {
    int a[3][3],b[3][3],c[3][3]={0};
    nhap_mang(a);
    nhap_mang(b);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}