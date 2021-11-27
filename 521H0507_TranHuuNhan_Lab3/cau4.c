#include <stdio.h>

int sum(int a) {
    int result = 0;
    for (int i=1; i<=a; i++)
    {
        result = result + i;
    }
    return result;
}

int main() {
    printf("enter number ");
    int number;
    scanf("%d", &number);
    while (number<=0) {
        printf("enter again ");
        scanf("%d", &number);
    }

    int result = sum(number);
    printf("sum is %d", result);

    return 0;
}