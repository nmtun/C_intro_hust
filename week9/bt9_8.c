#include <stdio.h>
#include <math.h>

int getJudgeData() {
    int a;
    scanf("%d",&a);
    return a;
}
int findLowest(int a, int b) {
    if (a>b) return b;
    else return a;
}
int findHighest(int a, int b) {
    if (a>b) return a;
    else return b;
}
int calcScore(int a) {
    double tbc = a/3;
    printf("%.2lf ",tbc);
    return 1;
}
int main () {
    int a,b,c,d,e;
    a=getJudgeData();
    b=getJudgeData();
    c=getJudgeData();
    d=getJudgeData();
    e=getJudgeData();
    int min,max;
    min = findLowest(a,b);
    min = findLowest(findLowest(a,b),c);
    min = findLowest(findLowest(findLowest(a,b),c),d);
    min = findLowest(findLowest(findLowest(findLowest(a,b),c),d),e);
    max = findHighest(a,b);
    max = findHighest(findHighest(a,b),c);
    max = findHighest(findHighest(findHighest(a,b),c),d);
    max = findHighest(findHighest(findHighest(findHighest(a,b),c),d),e);
    int sum = a + b + c + d + e - min - max;
    calcScore(sum);
    return 0;
}