#include <stdio.h>
#include <math.h>

float expression(int n) {
    if (n == 1) return 0.5;
    return n/2.0 + expression(n-1);
}

int main() {
    int n;
    printf("enter number n = ");
    scanf("%d", &n);
    
    printf("%.2f\n", expression(n));
    return 0;
}