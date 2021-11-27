#include <stdio.h>
#include <math.h>
int cau8(int n) {        //đếm số chữ số của n
    int d = 0;
    while (n>0) {
        n = n/10;
        d++;
    }
    return d;
}
int cau9(int n, int* x, int dec) {
    int i = -1;
     while (n>0) {
         i++;
         *(x+i) = n % 10;
         n = n / 10;
     }
     return *x;
}
int main() {
    int num;
    printf("Nhập số >9 ");
    scanf("%d", &num);  
    int *pointer, a[100];
    pointer = a;
    int dec = cau8(num)-1;

    cau9(num, pointer, dec);  

    printf("%d", pointer[0]);
    for (int i=dec-1; i>0; i--)
        printf("%d", pointer[i]);
    printf("%d", pointer[dec]);
    return 0;
}