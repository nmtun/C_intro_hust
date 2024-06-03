#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char mat_khau[64];
    int sum;
    int so = 0, chu_cai = 0, ki_tu = 0;
    scanf("%s",mat_khau);
    if (strlen(mat_khau) >= 10 && strlen(mat_khau) <= 64)
    {
        for(int i = 0; i < strlen(mat_khau); i++)
        {
            if (isdigit(mat_khau[i]) != 0) so++;
            if (isalpha(mat_khau[i]) != 0)
            {
                if (mat_khau[i] >= 'a' && mat_khau[i] <= 'z') chu_cai++;
                else ki_tu++;
            }
        }
        sum = chu_cai + ki_tu + so;
        if (so != 0 && ki_tu != 0 && chu_cai != 0 && (sum == strlen(mat_khau))) printf("True");
        else printf("False");
    }
    else printf("False");
    return 0;
}