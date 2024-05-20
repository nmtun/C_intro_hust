#include <stdio.h>

int main ()
{
    printf("*********************************************\n");
    printf("My name is Nguyen Manh Tung\n");
    printf("Nice to meet you\n");
    printf("Hope you will have happy time\n\n");
    printf("*********************************************\n");
}

#include <stdio.h>
#include <string.h>

void removeDuplicateSpaces(char *str) {
    int i, j;
    int length = strlen(str);
    int spaceCount = 0;

    for (i = 0; i < length; i++) {
        // Nếu ký tự hiện tại không phải dấu cách hoặc ký tự trước đó không phải dấu cách
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
            spaceCount = 0;
        } else if (str[i] == ' ') {
            spaceCount++;
        }

        // Giới hạn số lượng dấu cách liên tiếp là 1
        if (spaceCount <= 1 && str[i] == ' ') {
            str[j++] = str[i];
        }
    }

    // Kết thúc chuỗi mới bằng ký tự null
    str[j] = '\0';
}

int main() {
    char input[1000];
    
    printf("Nhập chuỗi: ");
    gets(input);  // Hãy sử dụng gets() một cách cẩn thận trong thực tế để tránh lỗi tràn bộ đệm
    
    removeDuplicateSpaces(input);
    
    printf("Chuỗi sau khi xóa dấu cách trùng nhau: %s\n", input);

    return 0;
}
