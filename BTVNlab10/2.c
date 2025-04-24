// Bài 2. Nhập vào một chuỗi, sau đó in hoa/in thường chuỗi đó ra màn hình.


#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[1000];
    fgets(s, 1000, stdin);
    int i;
    for (i = 0; i <= strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 123)
        {
            s[i] = s[i] - 32;
        }else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] +32;
        }
        
    }
    fputs(s, stdout);


return 0;
}
