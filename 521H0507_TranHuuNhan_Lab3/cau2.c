#include <stdio.h>

int sum_odd_number(int a) {
    int sum=0;
    for (int j=1; j<=a; j+=2){
        sum+=j;
    }
    return sum;
}

int main()
{
    printf("enter number ");
    int number;
    scanf("%d", &number);

    while (number <= 0){
        printf("nhap lai ");
        scanf("%d", &number);
    }

    printf("sum is %d", sum_odd_number(number));
    return 0;
}