#include <stdio.h>
#include <string.h>

void ten(char str[]){
    int a=strlen(str)-1;
    for (int i = 0; i <=a; i++)
    {
        if(str[i]==' ') 
        for (int j = i; j <=a; j++)
        {
            printf("%c",str[j+1]);
        }
    }
}
int main(){
    char ho_ten[100];
    gets(ho_ten);
    ten(ho_ten);
    return 0;
}