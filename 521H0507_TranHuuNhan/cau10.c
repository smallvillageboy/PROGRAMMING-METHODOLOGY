#include <stdio.h>
int main() {
    int tien, luachon;
    int hang[6] = {0,9000,11000,10000,13000,5000};
    char *c[6] ={"0", "Tra xanh C2", "Sting", "Pepsi", "Warrior", "Nuoc suoi"};
    printf("nhap so tien: ");
    scanf("%d", &tien);
    printf("nhap lua chon: ");
    scanf("%d", &luachon);
    int tinh = tien / hang[luachon];
    int tiendu = tien % hang[luachon];
    if (tinh == 0) {
        printf("Loi");
        return 0;
    }
    else {
        if (tiendu == 0) {
            printf("%s - %d chai", c[luachon], tinh);
        }
        else {
            printf("%s - %d chai - tien thua: %d", c[luachon], tinh, tiendu);
        }
        return 0;
    }
}