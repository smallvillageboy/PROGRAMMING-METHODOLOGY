#include <stdio.h>

int main() {
    int ma_khach_hang;
    printf("nhap ma khach hang: ");
    scanf("%d", &ma_khach_hang);
    if (ma_khach_hang <10000 || ma_khach_hang > 99999) {
        printf("Nhap du lieu sai");
        return 0;
    }
    else {
        int so_hang_nghin;
        so_hang_nghin = (ma_khach_hang/1000) %10;
        if (so_hang_nghin >= 0 && so_hang_nghin <= 2) {
            printf("khach hang hang Dong");
        }
        else if (so_hang_nghin >= 3 && so_hang_nghin <= 5) {
            printf("khach hang hang Bac");
        }
        else if (so_hang_nghin >= 6 && so_hang_nghin <= 7) {
            printf("khach hang hang Vang");
        }
        else {
            printf("khach hang hang Bach kim");
        }
        return 0;
    }
}