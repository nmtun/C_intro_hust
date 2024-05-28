#include <stdio.h>

void incomeplus(long *current, int year){
    if(year>3) *current+=300000;
}
int main(){
    int year;
    long *current,luong_co_ban;
    //nhap so nam cong tac, luong co ban
    scanf("%d%ld",&year,&luong_co_ban);
    current=&luong_co_ban;
    incomeplus(current,year);
    printf("%ld",*current);
    return 0;
}