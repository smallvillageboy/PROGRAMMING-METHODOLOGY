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
    int m=n;
    while (m>0){
        d=d+pow(m%10,3);
        m=m/10;
    }
    if (d==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}