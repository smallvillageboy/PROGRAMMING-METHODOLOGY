#include <stdio.h>
#include <stdlib.h>
void count(int *a, int *b, int size) {
    for (int i=0; i<size; i++) {
        if (*(b+i) == -1)
        { 
            int d = 1;
            for (int j=i+1; j<size; j++)
                if (*(a+i) == *(a+j)) {
                    d++;
                    *(b+j) = 0;
                }
                *(b+i) = d;
        }
    }
}
int main() {
    printf("nhap so phan tu cua mang ");
    int size;
    scanf("%d", &size);
    int *a = calloc(size, sizeof(int));
    for (int i=0; i<size; i++) {
        scanf("%d", &*(a+i));
    }
    int *b = calloc(size, sizeof(int));
    for (int j=0; j<size; j++) {
        *(b+j) = -1;
    }// khoi tao
    printf("tan suat cac phan tu trong mang la\n");
    count(a, b, size);
    for (int i=0; i<size; i++){
        if (*(b+i) > 0) {
            printf("%d : %d\n", *(a+i), *(b+i));
        }
    }
    free(a);
    free(b);
    return 0;
}