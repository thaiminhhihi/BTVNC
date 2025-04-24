// Bài 6. Nhập vào một chuỗi, sau đó in ra tần suất xuất hiện của các ký tự.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int freq[256] = {0};  

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);


    
    for (int i = 0; s[i] != '\0'; i++) {
        freq[(unsigned char)s[i]]++;
    }

    printf("\nTần suất xuất hiện của các ký tự:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}

