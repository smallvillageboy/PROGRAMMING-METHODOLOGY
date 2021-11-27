#include <stdio.h>
#include <math.h>
int main()
{
    int n,d=0;
    printf("nhap so ");
    scanf("%d",&n);
    while (n<0){
        printf("nhap lai ");
        scanf("%d",&n);
    }
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0)
        {
            printf("no");
            return 0;
        }
    printf("yes");
    return 0;
}