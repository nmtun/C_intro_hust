#include <stdio.h>
#include <math.h>

void printchars (int ch, int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main () {
    char ch;
    int n;
    scanf("%c%d",&ch,&n);
    printchars(ch,n);
    return 0;
}