#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max 255

void check(char str1[],char str2[]){
    int n=strlen(str1);
    for (int i = 0; i < n; i++){
        if(isalpha(str1[i])){
            str2[i]=str1[i];
        }
        else str2[i]='\0';
    }
}

int main(){
    char str1[max],str2[max];
    fgets(str1,max,stdin);
    check(str1,str2);
    int l= strlen(str2);
    if(l==0) printf("-1");
    return 0;
}

