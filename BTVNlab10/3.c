// Bài 3. Nhập vào một chuỗi, sau đó in ra màn hình chuỗi đảo ngược ra màn hình.
// Bài 4. Nhập vào một chuỗi, sau đó in ra số lượng ký tự là nguyên âm/phụ âm ra màn hình.
// Bài 5. Nhập vào chuỗi K và chuỗi V. Kiểm tra xem chuỗi K có chứa V không? (hàm strstr)
// Bài 6. Nhập vào một chuỗi, sau đó in ra tần suất xuất hiện của các ký tự.
// Bài 7. Nhập vào một chuỗi, xóa các khoảng trắng thừa sau đó in ra màn hình.
// VD: _ _Luong_ _ _Trung_Hieu_ _ _ -> Luong_Trung_Hieu
// Bài 8. Chuẩn hóa tên. Ví dụ "   nguYEN   Thuy  linH   " => "Nguyen Thuy Linh".
// Bài 9. Chuẩn hóa tên (in tên trước, họ đệm sau). Ví dụ "tran    VaN  Toan" => "Toan Tran Van". (strtok)
// Bài 10. Cấp email cho sinh viên. Ví dụ: người dùng nhập “Nguyen Van Minh” → Email: minhnv@aptech.com.vn (strtok)

#include <Stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int i;
    char s[100];
    fgets(s, 100, stdin);
    for ( i = strlen(s); i <= strlen(s) ; i--)
    {
        printf("%c", s[i]);
    }
    
    return 0;
}
