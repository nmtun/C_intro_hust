#include <stdio.h>
#include <string.h>

int dem(char str[]){
    int i=0,dem=0;
    while (str[i]!='\0')
    {
        if(str[i]==' ') dem++;
        i++;
    }
    printf("%d",dem);
    return dem;
}
int main(){
    char str[100];
    gets(str);
    dem(str);
    return 0;
}