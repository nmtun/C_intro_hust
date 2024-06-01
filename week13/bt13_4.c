#include <stdio.h>
#include <string.h>

void copy(char *str1, const char *str2) {
    while (*str2 != '\0') { 
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main(){
    char str1[100],str2[100];
    gets(str2);
    copy(str1,str2);
    puts(str1);
    return 0;
}