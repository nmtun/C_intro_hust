#include <stdio.h>

int main ()
{
    printf("Nhap tuoi cua ban:");
    int a; scanf("%d",&a);
    // if (a<18)
    // {
    //     printf("Tre em");
    // }
    // else if (18<=a&&a<65)
    // {
    //     printf("Truong thanh");
    // }
    // else printf("Nguoi gia");
    
    //a<18 ? printf("Tre em") : 18<=a && a<65 ? printf("Truong thanh") : printf ("Nguoi gia");
    
    switch (a)
    {
        case 0 ...17 : printf("Tre em"); break;
        case 18 ...64 : printf("Truong thanh"); break;
        case 65 ...125: printf("Nguoi gia"); break;
    }
    return 0;
}