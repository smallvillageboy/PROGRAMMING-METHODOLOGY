#include <stdio.h>
int main() {
    printf("nhap h = ");
    int h,m;
    scanf("%d", &h);
    printf("nhap m = ");
    scanf("%d", &m);
    
    if (h <= 40) {
        printf("so tien: %d", h*m);
    }
    else if (h <= 45) {
        printf("so tien: %.1f", 40*m + (h-40)*m*1.8);
    }
    else if (h <= 50) {
        int k = h - 45;
        printf("so tien: %.1f", 40*m + 5*m*1.8 + k*h*2.5);
    }
    else {
        int k = h - 50;
        printf("so tien %.1f", 40*m + 5*m*1.8 + 5*m*2.5 + k*m*2.6);
    }
    return 0;
}