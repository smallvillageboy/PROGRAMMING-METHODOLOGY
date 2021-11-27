#include <stdio.h>

int amstrong(int x) {
    if (x<2)
        return x;
    int d=0;
    while (x>0) {
        int z = x % 10;
        d+=z*z*z;
        x /= 10;
    }
    return d;
}

int main() {
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    while (num < 0) {
        printf("enter again: ");
        scanf("%d", &num);
    }
    
    for (int i=1; i<=num; i++)
        if (amstrong(i)==i)
            printf("%d ", i);
    
    return 0;
}