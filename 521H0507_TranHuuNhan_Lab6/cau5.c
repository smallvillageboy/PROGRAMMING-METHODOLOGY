#include <stdio.h>

int countDigit(int );

int main() {
    int n = 654212;

    printf("so chu so cua %d la: %d", n, countDigit(n));  

    return 0;
}

int countDigit(int n) {
    if (n < 10)
        return 1;
    return 1 + countDigit(n/10);
}