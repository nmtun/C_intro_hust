#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 100; i < 1000; i++)
    {
        if(i%n==0) printf("%d ",i);
    }
    return 0;
}

