#include <stdio.h>
int i=0;
char v[50];
void dec2bin(int a, int b){
    while (a != 0){
        v[i] = a%b;
        i++;
        a = a/2;
    }
}
int main(){
    int a, x;
    printf("nhap so ");
    scanf("%d%d", &a, &x);
    dec2bin(a,x);
    for (int j = i-1; j >= 0; j--)
        printf("%d", v[j]);
    return 0;
}