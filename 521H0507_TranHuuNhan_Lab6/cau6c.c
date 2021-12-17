#include <stdio.h>

int facorial(int );
long expression(int );

int main() {
    int n;
    printf("enter number n = ");
    scanf("%d", &n);

    printf("result: %ld", expression(n));

    return 0;
}

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n-1);
}
long expression(int n) {
    if (n == 1) return 1;
    return factorial(n) + expression(n-1);
}