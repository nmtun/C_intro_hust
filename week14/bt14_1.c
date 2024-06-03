#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
} ngay_sinh[2];
int datecmp(struct date ngay_sinh[]) {
    for (int i = 0; i < 2; i++) {
        scanf("%d/%d/%d", &ngay_sinh[i].day, &ngay_sinh[i].month, &ngay_sinh[i].year);
        if (ngay_sinh[i].day >= 32 || ngay_sinh[i].month >= 13) {
            printf("sai dinh dang");
            return -1; 
        }
    }
    for (int i = 0; i < 2; i++) {
        if (ngay_sinh[0].year > ngay_sinh[1].year) {
            printf("1");
            return 1;
        }
        if (ngay_sinh[0].year == ngay_sinh[1].year) {
            if (ngay_sinh[0].month > ngay_sinh[1].month) {
                printf("1");
                return 1;
            }
            if (ngay_sinh[0].month == ngay_sinh[1].month) {
                if (ngay_sinh[0].day > ngay_sinh[1].day) {
                    printf("1");
                    return 1;
                }
                if (ngay_sinh[0].day == ngay_sinh[1].day) {
                    printf("0");
                    return 0;
                }
                if (ngay_sinh[0].day < ngay_sinh[1].day) {
                    printf("-1");
                    return -1;
                }
            }
            if (ngay_sinh[0].month < ngay_sinh[1].month) {
                printf("-1");
                return -1;
            }
        }
        if (ngay_sinh[0].year < ngay_sinh[1].year) {
            printf("-1");
            return -1;
        }
    }
}
int main() {
    int kq = datecmp(ngay_sinh);
    return 0;
}