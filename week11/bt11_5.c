#include <stdio.h>

void swap(int *a, int *b, int *c){
    int tmp;
    tmp=*a; 
    *a=*b; 
    *b=*c; 
    *c=tmp;
}
int main(){
    int x=1,y=2,z=3;
    int *p,*q,*r;
    p=&x; q=&y; r=&z;
    printf("%d %d %d %d %d %d %d %d %d\n",x, y, z, p, q, r, *p, *q, *r); // y1
    swap(&x,&y,&z);
    printf("%d %d %d %d %d %d %d %d %d\n",x, y, z, p, q, r, *p, *q, *r); // y2
    swap(p,q,r);
    printf("%d %d %d %d %d %d %d %d %d\n",x, y, z, p, q, r, *p, *q, *r); // y3
    return 0;
}