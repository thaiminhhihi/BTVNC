// LUYỆN TẬP STRCAT, STRTOK, POINTER
// Bài 1. Nhập vào một chuỗi, sau đó in chuỗi đó ra màn hình.


#include <stdio.h>

int main(int argc, char const *argv[])
{
    char s[1000];
    fgets(s, 1000, stdin);
    fputs(s, stdout);
    return 0;
}
