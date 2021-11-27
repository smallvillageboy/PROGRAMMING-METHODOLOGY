#include <stdio.h>

int table(int x) {
    for (int i=2; i<=10; i++) {
        for (int j=1; j<=x; j++) {
            printf("%-2d * %-2d = %-2d\t", j, i, i*j);
        }
        printf("\n");
    }
}

int main() {
    printf("enter number ");
    int number;
    scanf("%d", &number);

    table(number);
    return 0;
}