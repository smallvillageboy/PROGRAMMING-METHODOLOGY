#include <stdio.h>

int main()
{
            int num1, num2;
            
            printf("Enter two integer numbers ");
            scanf("%d%d", &num1, &num2);
            printf("Results\n");
            
            printf("%d + %d = %d\n",num1, num2, num1 + num2);
            printf("%d - %d = %d\n",num1, num2, num1 - num2);
            printf("%d * %d = %d\n",num1, num2, num1 * num2);
            printf("%d / %d = %.2f\n",num1, num2, (float)num1/num2);
            printf("%d remainder %d = %d\n", num1, num2, num1 % num2);

            return 0;
}