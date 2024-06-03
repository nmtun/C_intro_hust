#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",&str);
    int n=strlen(str),i=0;
    if(n<=3) return 0;
    if(n>3){
        int t=n%3;
        if(t!=0){
            int l=n-t;
            for(i=0; i<t;i++){
                printf("%c",str[i]);
            }
            printf(",");
            for(int j=0; j<l/3; j++){
                for(int k=0; k<3; k++){
                    printf("%c",str[i]);
                    i++;
                }
                if(j<(l/3)-1) printf(",");
            }
        }
        else{
            int m=n/3;
            for(int j=0; j<m; j++){
                for(int k=0; k<3; k++){
                    printf("%c",str[i]);
                    i++;
                }
                if(j<m-1) printf(",");
            }
        }
    }
    return 0;
}