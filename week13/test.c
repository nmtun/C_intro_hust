
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char name[50];
//     printf("Nhap ho ten cua ban: ");
//     fgets(name, 50, stdin);
//     char *token = strtok(name, " ");
//     char *last_name = NULL;
//     while (token != NULL) {
//         last_name = token; 
//         token = strtok(NULL, " ");
//     }
//     if (last_name != NULL) {
//         *last_name = toupper(*last_name);
//         printf("Ten cua ban la: %s", last_name);
//     } else {
//         printf("Khong co ten nao duoc nhap.");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanHoaHoTen(char* hoTen) {
    int i;
    int isSpace = 1; // Biến kiểm tra khoảng trắng

    for (i = 0; i < strlen(hoTen); i++) {
        if (isSpace) {
            hoTen[i] = toupper(hoTen[i]);
            isSpace = 0;
        } else if (hoTen[i] == ' ') {
            isSpace = 1;
        }
    }
}

int main() {
    char hoTen[100];

    printf("Nhập họ và tên: ");
    //fgets(hoTen, sizeof(hoTen), stdin);
    gets(hoTen);
    chuanHoaHoTen(hoTen);
    printf("Họ và tên chuẩn hóa: %s\n", hoTen);
    return 0;
}

