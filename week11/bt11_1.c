#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int *ptr1, *ptr2, *ptr3;
    ptr1=&a; ptr2=&b; ptr3=&c;
    printf("gia tri cua cac bien a b c %d %d %d\n",a,b,c);
    printf("gia tri cua bien a b c duoc tro den boi con tro %d %d %d",*ptr1,*ptr2,*ptr3);
    return 0;
}