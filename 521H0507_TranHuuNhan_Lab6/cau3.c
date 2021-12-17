#include <stdio.h>

int luyThua(int );

int main() {
    int n = 10;

    printf("2^%d = %d", n, luyThua(n));      

    return 0;
}

int luyThua(int n) {
    if (n == 0) 
        return 1;
    if (n == 1) 
        return 2;
    return 2 * luyThua(n-1);
}