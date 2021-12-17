#include <stdio.h>
#include <string.h>

int main(){
    char s[256];
    printf("nhap chuoi ");
    fgets(s, 256, stdin);
    // xoa ki tu xuong dong
    s[strlen(s) - 1] = '\0';
    printf("chuoi sau khi dao la ");
    int i = strlen(s);
    while (i >= 0) {
        printf("%c", s[i--]);
    }
    return 0;
}