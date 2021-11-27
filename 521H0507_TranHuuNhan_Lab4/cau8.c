#include <stdio.h>

void delete_element(int *_p, int size, int vt) {
    for (int  i=vt; i<size; i++) {
        *(_p+i) = *(_p+i+1);
    }
}
int main() {
    int *p, n, pos;
    printf("enter size of array ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &*(p+i));
    }
    printf("position ");
    scanf("%d", &pos);
    while (pos >= n) {
        printf("enter position u want to delete ");
        scanf("%d", &pos);
    }
    delete_element(p,n,pos);
    for (int i=0; i<n-1; i++)
        printf("%d ", *(p+i));
    return 0;
}