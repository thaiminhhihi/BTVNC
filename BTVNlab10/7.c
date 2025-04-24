// Bài 7. Nhập vào một chuỗi, xóa các khoảng trắng thừa sau đó in ra màn hình.
// VD: _ _Luong_ _ _Trung_Hieu_ _ _ -> Luong_Trung_Hieu
// Bài 8. Chuẩn hóa tên. Ví dụ "   nguYEN   Thuy  linH   " => "Nguyen Thuy Linh".
// Bài 9. Chuẩn hóa tên (in tên trước, họ đệm sau). Ví dụ "tran    VaN  Toan" => "Toan Tran Van". (strtok)
// Bài 10. Cấp email cho sinh viên. Ví dụ: người dùng nhập “Nguyen Van Minh” → Email: minhnv@aptech.com.vn (strtok)

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[1000];
    gets(s);
    char *token = strtok(s, " ");

    while (token != NULL)
    {
        printf("%s", token);
        token = strtok(NULL, " ");
        if (token != NULL)
        {
            printf(" ");
        }
    }

    return 0;
}
