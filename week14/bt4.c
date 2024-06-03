#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define so_luong 100

typedef struct{
    char ma_sp[5];
    int gia;
}san_pham;

typedef struct{
    char ma_sp1[5];
    int so;
}mua;

int main(){
    san_pham arrsp[so_luong];
    for(int i = 0; i < so_luong; i++){
        scanf("%s", arrsp[i].ma_sp);
        if(strcmp(arrsp[i].ma_sp, "-1") == 0) break;
        scanf("%d", &arrsp[i].gia);
    }
    return 0;
}

 




