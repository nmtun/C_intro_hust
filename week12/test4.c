#include <stdio.h>
#include <math.h>

int main(){
    // int n;
    // scanf("%d",&n);
    int x1,y1,x2,y2;
    int x,y,r;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    scanf("%d%d%d",&x,&y,&r);
    float l;
        if(0<=x1 && x<=x1 && 0<=y && y<=y1){
            l=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x1<=x && x<=x2 && 0<=y && y<=y1){
            l=y1-y;
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x2<=x && 0<=y && y<=y1){
            l=sqrt((x2-x)*(x2-x)+(y1-y)*(y1-y));
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x2<=x && y1<=y && y<=y2){
            l=x-x2;
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x2<=x && y2<=y){
            l=sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x1<=x && x<=x2 && y2<=y){
            l=y-y2;
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(0<=x && x<=x1 && y2<=y){
            l=sqrt((x1-x)*(x1-x)+(y2-y)*(y2-y));
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(0<=x && x<=x1 && y1<=y && y<=y2){
            l=x1-x;
            // if (l<=r) printf("1");
            // else printf("0");
            if (l==r) printf("1");
            if (l<r) printf("2");
            else printf("0");
        }
        if(x1<=x && x<=x2 && y1<=y && y<=y2){
            l=sqrt((x1-x)*(x1-x)+(y2-y)*(y2-y))/2;
            // if((x-x1)==(y2-y) || r==l) printf("1");
            // else printf("0");
            if(r==l) printf("4");
            if(((x-x1)==(y2-y) && (y2-y)==(y-y1)) || ((x2-x)==(y2-y) && (y2-y)==(y-y1))) printf("3");
            if(((x-x1)!=(y2-y) && (y2-y)==(y-y1)) || ((x2-x)!=(y2-y) && (y2-y)==(y-y1))) printf("2");
            else printf("0");
        }
    return 0;
}