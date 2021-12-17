#include <stdio.h>

long factorial(int );

int main() {
    int n = 10;

    printf("%d! = %d", n, factorial(n));   

    return 0;
}

long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}