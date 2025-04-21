// Bài 5: Thêm giá trị vào mảng
// Yêu cầu: Viết hàm insertElement sử dụng kiểu trả về void để thêm một giá trị n vào vị trí thứ i (do người dùng nhập) trong mảng arr. Mảng, giá trị n, và i được nhập từ bàn phím.
// Lưu ý:
// i là chỉ số hợp lệ trong mảng.
// Sau khi thêm, các phần tử còn lại sẽ được dời xuống để chừa chỗ cho phần tử mới.
// Ví dụ:
// Input: arr = [1, 2, 4], n = 3, i = 2
// Output: arr = [1, 2, 3, 4]
#include <stdio.h>

void insertElement(int *arr, int *vitri, int *phantuthemvao, int * size)
{
    int i;
    for (i = *vitri; i <= *size + 1; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[*vitri] = *phantuthemvao;
    for (i = 0; i < *size + 1; i++)
    {
        printf("%d", arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int size,vitri,phantuthemvao;
   
    printf("nhap so luong phan tu co trong mang: ");
    scanf("%d", &size);
    int arr[1000];
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        
    }
  
    printf("nhap phan tu muon them vao: ");
    scanf("%d", &phantuthemvao);
    printf("nhap vi tri muon them vao: ");
    scanf("%d", &vitri);
    insertElement(&arr, &vitri, &phantuthemvao, &size);
    return 0;
}
