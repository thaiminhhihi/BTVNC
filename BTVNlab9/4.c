// Bài 4: Xóa phần tử trong mảng
// Yêu cầu: Viết hàm deleteElement sử dụng kiểu trả về void để xoá phần tử ở vị trí thứ i (do người dùng nhập) trong mảng arr. Mảng và giá trị i được nhập từ bàn phím.
// Lưu ý:
// i là chỉ số hợp lệ trong mảng.
// Sau khi xoá, các phần tử còn lại trong mảng sẽ được dời lên để lấp khoảng trống.
// Ví dụ:
// Input: arr = [1, 2, 3, 4], i = 2
// Output: arr = [1, 2, 4]
#include <stdio.h>

void deleteElement(int *arr, int *vitricanxoa, int *size)
{
    int i;
    for (i = *vitricanxoa; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (i = 0; i < *size - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int size;
    printf("nhap so luong phan tu co trong mang: ");
    scanf("%d", &size);
    int arr[1000];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int vitricanxoa;
    printf(" vi tri can xoa ");
    scanf("%d", &vitricanxoa);
    deleteElement(&arr, &vitricanxoa, &size);
    return 0;
}
