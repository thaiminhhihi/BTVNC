// Bài 1. Viết chương trình nhập vào 2 phân số (gồm 2 số nguyên là tử số và mẫu số). Sau đó cộng, trừ, nhân, chia hai Phân Số đó và rút gọn phân số nếu có thể.
#include <stdio.h>

struct Phanso
{
    float tuso;
    float mauso;
};
typedef struct Phanso PS;

int main(int argc, char const *argv[])
{
    PS Phanso1, Phanso2, Phanso3, Phanso4, Phanso5, Phanso6;

    scanf("%f", &Phanso1.tuso);
    scanf("%f", &Phanso2.tuso);
    scanf("%f", &Phanso1.mauso);
    scanf("%f", &Phanso2.mauso);

    Phanso3.tuso = Phanso1.tuso * Phanso2.mauso + Phanso1.mauso * Phanso2.tuso;

    Phanso3.mauso = Phanso1.mauso * Phanso2.mauso;

    printf(" ket qua sau phep cong la %f", Phanso3.tuso / Phanso3.mauso);

    Phanso4.tuso = Phanso1.tuso * Phanso2.mauso - Phanso1.mauso * Phanso2.tuso;

    Phanso4.mauso = Phanso1.mauso * Phanso2.mauso;

    printf(" ket qua sau phep tru la %f", Phanso4.tuso / Phanso4.mauso);

    Phanso5.tuso = Phanso1.tuso * Phanso2.tuso;

    Phanso5.mauso = Phanso1.mauso * Phanso2.mauso;

    printf(" ket qua sau phep nhan la %f", Phanso5.tuso / Phanso5.mauso);

    Phanso6.tuso = Phanso1.tuso * Phanso2.mauso;

    Phanso6.mauso = Phanso1.mauso * Phanso2.tuso;

    printf(" ket qua sau phep chia la %f", Phanso6.tuso / Phanso6.mauso);

    return 0;
}
