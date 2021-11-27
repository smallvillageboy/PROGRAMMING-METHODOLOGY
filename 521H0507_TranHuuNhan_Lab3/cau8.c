#include <stdio.h>

int cau8(int n) {
    int d=0;
    while (n>0) {
        n=n/10;
        d++;
    }
    return d;
}

int main()
{
    int num;
    printf("enter number >=0 ");
    scanf("%d", &num);

    printf("number digit is %d", cau8(num));
    return 0;
}