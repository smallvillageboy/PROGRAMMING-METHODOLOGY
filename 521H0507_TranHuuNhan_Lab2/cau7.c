#include <stdio.h>
int main()
{
    int n, d=1;
    printf("tich cac chu so \n");
    scanf("%d", &n);
    while (n > 0){
        if (n%10==0)
        {
            d=0;
            break;
        }
        d *= n % 10;
        n = n / 10;
    }
    printf("%d", d);
    return 0;
}