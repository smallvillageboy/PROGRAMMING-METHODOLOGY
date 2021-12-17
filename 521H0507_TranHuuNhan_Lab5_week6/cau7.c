#include <stdio.h>
#include <string.h>
int main() {
    printf("nhap chuoi ");
    char s[100], c[1];
    fgets(s, 100, stdin);
    s[strlen(s)-1] = 0;
    printf("nhap ki tu");
    scanf("%c", &c[0]);
    printf("vi tri xuat hien cua ki tu la ");
    for (int i = 0; i<strlen(s); i++) {
        if (s[i] == c[0]) {
            printf("%d ", i);
        }
    }
    return 0;
    
}