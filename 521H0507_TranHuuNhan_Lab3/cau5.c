#include <stdio.h>

int first_digit(int a) {
    while (a>=10) {
        a=a/10;
    }
    return a;
}
int last_digit(int a) {
    return a%10;
}
int main() {
    printf("enter number ");
    int num;
    scanf("%d", &num);

    int first=first_digit(num);
    int last=last_digit(num);

    printf("first digit is %d \nlast digit is %d", first, last);
    return 0;
}