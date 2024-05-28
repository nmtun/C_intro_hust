#include <stdio.h>

int main (){
    int a[7]={13, -355, 235, 47, 67, 943, 1222};
    for (int i = 0; i < 7; i++)
    {
        printf("dia chi cua phan tu %d la: %d",a[i],&a[i]);
        printf("\n");
    }
    return 0;
}