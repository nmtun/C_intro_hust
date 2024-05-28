#include <stdio.h>

//y a:
int dem_0(int arr[], int n){
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0) dem++;
    }
    printf("so phan tu bang 0: %d\n",dem);
    return dem;
}

//y b
int demchuoidainhat(int a[],int n){
	int count=0,l=1;
	for(int i = 0 ; i < n; i++){
		if(a[i]==0){
			count++;
		}
        else{
			count=0;
		}
		if(l < count){
			l = count;
		}
	}
    printf("chuoi phan tu 0 dai nhat la: %d phan tu\n",l);
	return l;
}

//y c:
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
        printf("phan tu %d xuat hien: %d lan\n",b[i],dem[i]);
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
    dem_0(arr,n);
    demchuoidainhat(arr,n);
    dem_ptu(arr,n);
    return 0;
}