#include <stdio.h>
#include <math.h>

int is_prime(int x) {
    for (int i=2; i<sqrt(x); i++) {
        if (x % i ==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("enter number ");
    int number;
    scanf("%d", &number);
    while (number < 2) {
        printf("enter again ");
        scanf("%d", &number);
    }

    if (is_prime(number)) {
        printf("yes");
    }   
    else {
        printf("no");
    }
    return 0;   
}
