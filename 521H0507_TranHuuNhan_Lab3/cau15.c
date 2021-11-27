#include <stdio.h>
#include <math.h>

int is_prime(int x) {
    for (int i=2; i<=sqrt(x); i++) {
        if (x % i ==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    while (num < 0) {
        printf("enter again: ");
        scanf("%d", &num);
    }
    
    for (int i=2; i<=num; i++)
        if (is_prime(i))
            printf("%d ", i);
    
    return 0;
}