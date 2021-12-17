#include <stdio.h>

int expression(int n) {
    if (n == 1)
        return 3;
    return (2*n +1) + expression(n-1);
} 

int main() {
    int n;
    printf("enter number: n = ");
    scanf("%d", &n);

    printf("Result: %d", expression(n));

    return 0;
}