#include <stdio.h>

int dec2bin(int a, int *b) {
    int i =0;
    while (a >0) {
        *(b + i) = a % 2;
        i++;
        a = a / 2;
    }
    return i-1;
}

int main() {
    int a, *x;
    printf("nhap so ");
    scanf("%d", &a);
    int i = dec2bin(a, x);
    for (int j = i; j >= 0; j--)
        printf("%d", *(x+j));
    return 0;
}