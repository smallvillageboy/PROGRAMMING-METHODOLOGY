#include <stdio.h>
#include <stdlib.h>
int check(int *_p, int _size, int c) {
    for (int i = 0; i <=_size; i++) {
        if (*(_p + i) == c) {
            return 0;
        }
    }
    return 1;
}
int count(int *a, int size) {
    int *p, index = -1;
    for (int i = 0; i < size; i++) {
        if (i == 0 || check(p, index, *(a+i))) {
            index++;
            *(p + index) = *(a + i);
        }
    }
    return index;
}
int main() {
    int size;
    printf("nhap so phan tu ");
    scanf("%d", &size);
    int *a = calloc(size, sizeof(int));
    for (int i=0; i<size; i++) {
        scanf("%d", &*(a+i));
    }

    printf("\n");
    printf("so phan tu khac nhau trong mang la %d", count(a, size)+1);
    free(a);
    return 0;
}