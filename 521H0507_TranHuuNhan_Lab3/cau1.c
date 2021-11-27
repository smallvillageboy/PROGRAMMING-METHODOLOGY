#include <stdio.h>

int sum_even_number(int n) {
    int sum=0;
    for (int i=2; i<=n; i+=2) {
      sum = sum + i;
    }
    return sum;
}

int main()
{
    int number;
    printf("enter number ");
    scanf("%d", &number);
    while (number <=0) {
      printf("enter again ");
      scanf("%d", &number);
    }

    printf("%d", sum_even_number(number));
    return 0;
}