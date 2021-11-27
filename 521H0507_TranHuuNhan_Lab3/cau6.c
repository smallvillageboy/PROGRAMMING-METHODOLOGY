#include <stdio.h>

int sum_digit(int n) {
    int sum = 0;
    while (n>0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    printf("enter number >= 0: ");
    int num;
    scanf("%d", &num);

    int result = sum_digit(num);

    printf("sum ditgit is %d", result);
    return 0;
}