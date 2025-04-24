// Bài 8. Chuẩn hóa tên. Ví dụ "   nguYEN   Thuy  linH   " => "Nguyen Thuy Linh".


#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* chuanHoaTu(char *s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(int argc, char const *argv[])
{
    char s[1000];
    fgets(s, 1000, stdin);
    char *token = strtok(s, " ");
    while(token != NULL){
        chuanHoaTu(token);
        printf("%s", token);
        token = strtok(NULL, " ");
        if (token != NULL)
        {
            printf(" ");
        }
    }
    return 0;
}
