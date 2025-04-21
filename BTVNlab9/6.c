// Bài 6: Duyệt mảng bằng con trỏ
// Yêu cầu:
// Viết hàm inputArray để nhập các giá trị vào mảng bằng con trỏ.
// Viết hàm printArray để in ra các giá trị trong mảng bằng con trỏ.
// Ví dụ:
// Input: arr = [1, 2, 3]
// Output: 1 2 3
#include <stdio.h>
void inputArray(int *arr, int *size)
{
    int i;

    for (i = 0; i < *size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArray(int *arr, int *size)
{
    int i;
    for (i = 0; i < *size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int size;
    int arr[100];
    
    scanf("%d", &size);
    
    inputArray(arr, &size );
    printArray(arr, &size);

    return 0;
}
