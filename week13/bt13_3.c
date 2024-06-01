#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char ma_kh[7];
    scanf("%s",&ma_kh);
    int length=strlen(ma_kh);
    for (int i = 0; i < length; i++)
    {
        if(i<3 && !isalpha(ma_kh[i])) printf("khong hop le"); 
        return 1;
        if(i>=3 && !isdigit(ma_kh[i])) printf("khong hop le");
        return 1;
    }
    printf("hop le");
    return 0;
}