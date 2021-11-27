#include <stdio.h>

int perfect_number(int x) {
    int s = 0;
    for(int i = 1; i < x; i++)  
    {  
        if (x % i == 0)  
        {  
            s = s + i;  
        }  
    }
    return s; 
}

int main() {
    printf("enter number ");
    int n;
    scanf("%d", &n);
    while (n < 0) {
        printf("enter again: ");
        scanf("%d", &n);
    }
    for (int i=1; i<=n; i++)
        if (perfect_number(i)==i) {
            printf("%d ", i);
        }
    return 0;
}