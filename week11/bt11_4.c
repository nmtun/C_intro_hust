#include <stdio.h>

void swap(int *a, int *b, int *c){
    int tmp;
    tmp=*a; 
    *a=*b; 
    *b=*c; 
    *c=tmp;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}