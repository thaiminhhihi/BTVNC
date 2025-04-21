// Bài 2: Tính tổng hai giá trị
// Yêu cầu: Viết hàm calculateSum sử dụng kiểu trả về void để tính tổng hai số nguyên a và b được nhập từ bàn phím, và in kết quả ra màn hình.
// Ví dụ:
// Input: a = 5, b = 6
// Output: sum = 11
#include <stdio.h>
void calculateSum (int *sum, int* a, int* b){
*sum = *a + *b;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b= 10;
    int sum;
    calculateSum(&sum,&a,&b);
    printf("%d", sum);
    return 0;
}
