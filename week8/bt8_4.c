#include <stdio.h>

int main () 
{
    int n,x; 
    int qua=0,truot=0;
    scanf("%d",&n);
    while (n--)
    {
        printf("qua nhap 1 - truot nhap 2:" );
        scanf("%d",&x);
        if (x==1)
        {
            qua=qua+1;
        }
        if (x==2)
        {
            truot=truot+1;
        }
    }
    printf("so sv qua: %d \nso sv truot: %d",qua,truot);
    return 0;
}