#include <stdio.h>
#include <math.h>

float expression(int );

int main() {
    int n;
    printf("nhap n = ");
    scanf("%d", &n);

    printf("%.2f", expression(n));
    
    return 0;
}

float expression(int n) {
    if (n == 1)
        return 1;
    return sqrt(n) + expression(n-1);
}