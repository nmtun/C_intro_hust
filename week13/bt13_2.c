#include <stdio.h>
#include <string.h>

void thay_the(char str[], char a, char b){
    int i=0;
    while (str[i]!='\0')
    {
        if(str[i]==a) str[i]=b;
        i++;
    }
    printf("%s",str);
}
void main(){
    char str[100],a,b;
    gets(str); 
    scanf("%c %c",&a,&b);
    // char *x,*y;
    // x=&a; y=&b;
    thay_the(str,a,b);
}