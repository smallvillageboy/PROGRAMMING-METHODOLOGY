#include <stdio.h>

int product_of_digit(int n) {
    if (n==0)
        return 0;
    else {
        int mul = 1;
        while (n>0) {
            if (n%10==0)
                return 0;
            mul *= n % 10;
            n /= 10;
        }
        return mul;
    }
    
}

int main() {
    printf("enter number >=0 : ");
    int num;
    scanf("%d", &num);

    int result = product_of_digit(num);

    printf("product ditgit is %d", result);
    return 0;
}