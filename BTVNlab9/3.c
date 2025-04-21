// Bài 3: Tăng giá trị của biến
// Yêu cầu: Viết hàm increment sử dụng kiểu trả về void để tăng giá trị của một số nguyên a được nhập từ bàn phím lên 1 đơn vị.
// Ví dụ:
// Input: a = 10
// Output: a = 11
#include <stdio.h>
 void increment (int *a){
    (*a) ++;
 }

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    
    return 0;
}
