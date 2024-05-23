#include <stdio.h>
#include <math.h>

int main ()
{
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d",&n);

    printf("So sinh vien nho nhat trong mot lop: %d\n\n", n/7);
    printf("So sinh vien lon nhat trong mot lop: %d\n\n", n%7==0 ? n/7 : n/7 + 1);
    printf("So sinh vien trung binh trong cac lop: %.2lf\n\n", (double)n/7);
    printf("So lop co so sinh vien tren kich thuoc trung binh: %d\n\n", n%7);
    printf("So lop co sinh vien nhieu nhat la den trung binh: %d\n\n", 7 - n%7);
    printf("So sinh vien trong cac lop co kich thuoc lon hon trung binh: %d\n\n", n%7==0 ? 0 : n/7 + 1);
    printf("So lop co kich thuoc dung bang kich thuoc trung binh: %d\n\n", n%7==0 ? 7 : 0);
}