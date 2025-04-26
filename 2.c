// Bài 2. Nhập vào một danh sách lớp SinhVien(mã sinh viên, tên, giới tính, điểm toán, lý, hoá), yêu cầu xây dựng menu:
// 1.  Nhập và xuất ra thông tin của tất cả sinh viên.
// 2. Xuất sinh viên có điểm trung bình cao nhất.
// 3. Xuất sinh viên có điểm trung bình thấp nhất.
// 4. Tìm sinh viên có mã sinh viên là 123.
// 3. Tìm tất cả sinh viên có tên Nam.
// 4. Sắp xếp sinh viên thứ tự giảm dần theo điểm GPA.
// 5. Cập nhật thông tin của sinh viên có mã sinh viên 123.
// 6. Xóa sinh viên có mã sinh viên 123.
// 7. Thêm sinh viên ở vị trí thứ i.
// 8. Xóa tất cả sinh viên có giới tính Nam

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SINHVIEN
{
    int msv;
    char *ten;
    int gioi_tinh; // 1- nam, 0 nu, -1 khac
    float diem_toan, diem_ly, diem_hoa;
} SV;

void nhapSV(SV *sv)
{
    printf("Nhap ma sinh vien: ");
    scanf("%d", &sv->msv);

    fflush(stdin);

    printf("Nhap ten sinh vien: ");
    sv->ten = (char *)malloc(20 * sizeof(char));
    gets(sv->ten);

    printf("Nhap gioi tinh: ");
    scanf("%d", &sv->gioi_tinh);

    printf("Nhap diem toan, ly, hoa: ");
    scanf("%f%f%f", &sv->diem_toan, &sv->diem_ly, &sv->diem_hoa);
}

void nhapDSSV(SV svs[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d\n", i + 1);
        nhapSV(&svs[i]);
    }
}

void xuatSV(SV sv)
{
    printf("Ma sinh vien: %d\n", sv.msv);
    printf("Ten sinh vien: %s\n", sv.ten);
    if (sv.gioi_tinh == 1)
    {
        printf("Gioi tinh:Nam\n");
    }
    else if (sv.gioi_tinh == 0)
    {
        printf("Gioi tinh: Nu\n");
    }
    else
    {
        printf("Gioi tinh: Khac\n");
    }

    printf("Diem toan: %.2f\n", sv.diem_toan);
    printf("Diem ly: %.2f\n", sv.diem_ly);
    printf("Diem hoa: %.2f\n\n", sv.diem_hoa);
}

float AVG(SV sv)
{
    return (sv.diem_toan + sv.diem_ly + sv.diem_hoa) / 3;
}

// float AVG2(float toan, float ly, float hoa) {
//     return (toan+ly+hoa)/3;
// }

void findMAXAVG(SV svs[], int n)
{

    SV SVMAX = svs[0];

    int i;
    for (i = 1; i < n; i++)
    {
        if (AVG(SVMAX) < AVG(svs[i]))
        {
            SVMAX = svs[i];
        }

        // if (AVG2(SVMAX.diem_toan, SVMAX.diem_ly, SVMAX.diem_hoa) < AVG2(svs[i].diem_toan,svs[i].diem_ly,svs[i].diem_hoa)) {
        //     SVMAX = svs[i];
        // }
    }

    printf("\nSinh vien co diem trung binh cao nhat: \n");
    xuatSV(SVMAX);
}

void findMINAVG(SV svs[], int n)
{

    SV SVMIN = svs[0];

    int i;
    for (i = 1; i < n; i++)
    {
        if (AVG(SVMIN) > AVG(svs[i]))
        {
            SVMIN = svs[i];
        }

        // if (AVG2(SVMAX.diem_toan, SVMAX.diem_ly, SVMAX.diem_hoa) < AVG2(svs[i].diem_toan,svs[i].diem_ly,svs[i].diem_hoa)) {
        //     SVMAX = svs[i];
        // }
    }

    printf("\nSinh vien co diem trung binh thap nhat: \n");
    xuatSV(SVMIN);
}

void findSVByID(int masv, SV *svs, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (svs[i].msv == masv)
        {
            printf("\nSinh vien co ma sinh vien la %d\n", masv);
            xuatSV(svs[i]);
            return;
        }
    }
}

void findSVByName(char name[], SV *svs, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmpi(svs[i].ten, name) == 0)
        {
            xuatSV(svs[i]);
        }
    }
}

void swap(SV *a, SV *b)
{
    SV temp = *a;
    *a = *b;
    *b = temp;
}

void xuatDSSV(SV *svs, int n)
{
    printf("=====================DSSV=====================\n");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Thong tin sinh vien thu %d\n", i + 1);
        xuatSV(svs[i]);
    }
}

void sortByAVGDESC(SV *svs, int n)
{

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        { 
            if (AVG(*(svs + i)) > AVG(*(svs + j)))
            {
                swap(svs + i, svs + j);
            }
        }
    }

    printf("\nDANH SACH SINH VIEN SAP XEP GIAM DAN THEO DIEM TB\n");

    xuatDSSV(svs, n);
}

void updateSVByID(int msv, SV *svs, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (svs[i].msv == msv)
        {
            nhapSV(&svs[i]);
            break;
        }
    }
}

// void addSV(SV** svs, int *n)
// {
//     SV sv;
//     nhapSV(&sv);

//     int k;
//     printf("Them sinh vien nay vao vi tri nao?: ");
//     scanf("%d", &k);

//     // SV* temp = svs;

//     int i;
//     *n = *n + 1;
//     SV* temp = realloc(*svs, *n * sizeof(SV));

//     *svs = temp;

//     for (i = *n; i > k; i--)
//     {
//         *svs[i] = *svs[i - 1];
//     }

//     *svs[k] = sv;
// }

int main(int argc, char const *argv[])
{

    SV *svs;
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    svs = malloc(n * sizeof(SV));

    nhapDSSV(svs, n);

    xuatDSSV(svs, n);

    addSV(&svs, &n);

    xuatDSSV(svs, n);

    // findSVByID(123, svs, n);

    // char name[] = "Nam";
    // findSVByName(name, svs, n);

    // findMAXAVG(svs, n);
    // findMINAVG(svs, n);

    // sortByAVGDESC(svs, n);

    // updateSVByID(123, svs, n);

    // xuatDSSV(svs, n);

    free(svs);

    return 0;
}
