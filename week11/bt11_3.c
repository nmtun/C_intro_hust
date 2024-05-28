#include <stdio.h>

int main(){
    float a,b,c,d=0;
    scanf("%f%f%f",&a,&b,&c);
    float *ptr;
    ptr=&d;
    *ptr=100;
    printf("gia tri cua a,b,c sau khi them boi con tro la: %.2f %.2f %.2f",*ptr+a,*ptr+b,*ptr+c);
    return 0;
}