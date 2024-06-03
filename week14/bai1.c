#include <stdio.h>

int chi_so(int b[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        if (b[i]==x) {
            return i;
        } 
    } 
    return -1;
}
void hien_thi(int b[], int dem[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n",b[i],dem[i]);
    }
}
void dem_ptu(int arr[], int n){
    int b[100];
    int dem[100];
    int size=0;
    for (int i = 0; i < n; i++)
    {
        dem[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        int check = chi_so(b,size,arr[i]);
        if(check==-1){
            b[size] = arr[i];
            dem[size] = 1;
            size++;
        }
        else {
            dem[check]++;
        }
    }
    hien_thi(b, dem, size);
}
int main(){
    int n, arr[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    dem_ptu(arr,n);
    return 0;
}