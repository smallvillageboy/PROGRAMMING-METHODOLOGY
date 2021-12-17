#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    fgets(s1, 100, stdin);
    s1[strlen(s1)-1] = 0;
    fgets(s2, 100, stdin);
    s2[strlen(s2)-1] = 0;
    printf("vi tri s2 xuat hien trong s1 la: %d", strstr(s2, s1));
}