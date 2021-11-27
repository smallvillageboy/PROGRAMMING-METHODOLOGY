#include <stdio.h>

int fact(int x) {
    if (x==0)
        return 1;
    return x*fact(x-1);
}
int main() {
    printf("nhap so ");
    int n;
    scanf("%d", &n);
    while (n<0) {
        printf("nhap lai ");
        scanf("%d", &n);
    }
    int kq=fact(n);
    printf("%d! = %d", n, kq);
    return 0;
}