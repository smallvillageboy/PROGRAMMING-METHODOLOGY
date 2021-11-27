#include <stdio.h>

int amstrong(int x) {
    int d=0;
    while (x>0) {
        int z = x % 10;
        d+=z*z*z;
        x /= 10;
    }
    return d;
}
int main() {
    printf("enter number ");
    int num;
    scanf("%d", &num);

    if (num == amstrong(num))
        printf("yes");
    else
        printf("no");
    return 0;
}
