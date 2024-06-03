#include <stdio.h>

int main(){
    int n,arr[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i = 0; i < n; i++){
        if(max<=arr[i]) max=arr[i];
    }
    if(max<119) printf("0");
    if(119<=max && max<=153) printf("1");
    if(154<=max && max<=177) printf("2");
    if(178<=max && max<=209) printf("3");
    if(210<=max && max<=249) printf("4");
    if(max>=250) printf("5");

    return 0;
}