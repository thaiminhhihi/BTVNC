// Bài 5. Nhập vào chuỗi K và chuỗi V. Kiểm tra xem chuỗi K có chứa V không? (hàm strstr)

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char K[1000];
    char V[1000];
    fgets(K,1000, stdin);
    fgets(V,1000,stdin);
    if (strstr(K,V) == 0)
    {
        printf("khong chua");
    }else{
        printf("chua");
    }
    
    return 0;
}
