#include <stdio.h>

double tien_truoc(int n){
    double truoc, tien1;
    if (n<=50)
        truoc=n*1728;
    if (51<=n && n<=100)
        truoc=(n-51+1)*1786 + 50*1728;
    if (101<=n && n<=200)
        truoc=(n-101+1)*2074 + 50*1786 + 50*1728;
    if (201<=n && n<=300)
        truoc=(n-201+1)*2612 + 100*2074 + 50*1786 + 50*1728;
    if (301<=n && n<=400)
        truoc=(n-301+1)*2919 + 100*2612 + 100*2074 + 50*1786 + 50*1728;
    if (401<=n) 
        truoc=(n-401+1)*3015 + 100*2919 + 100*2612 + 100*2074 + 50*1786 + 50*1728;
    tien1=truoc+0.1*truoc;
    return tien1;
}
double tien_sau(int n){
    double sau, tien2;
    if (n<=100)
        sau=n*1728;
    if (101<=n && n<=200)
        sau=(n-101+1)*2074 + 100*1728;
    if (201<=n && n<=400)
        sau=(n-201+1)*2612 + 100*2074 + 100*1728;
    if (401<=n && n<=700)
        sau=(n-401+1)*3111 +200*2612 + 100*2074 + 100*1728;
    if (701<=n)
        sau=(n-701+1)*3457 + 300*3111 +200*2612 + 100*2074 + 100*1728;
    tien2=sau+0.1*sau;
    return tien2;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%.2lf",tien_sau(n)-tien_truoc(n));
    return 0;
}