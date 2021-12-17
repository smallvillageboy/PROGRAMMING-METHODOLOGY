#include <stdio.h>

int luyThua(int , int);

int main() {
    int n = 10;
    int a = 5;

    printf("%d^%d = %d", a, n, luyThua(a,n));        
    return 0;
}

int luyThua(int a, int n) {
    if (n == 0) return 1;
    if (n == 1) return a;
    return a * luyThua(a, n-1);
}