#include <stdio.h>
int main()
{
    long d=1;
    int i=1,n;
    scanf("%d",&n);
    while (n<0)
    {
        printf("nhap lai ");
        scanf("%d",&n);
    }
    while (i<n){
        i++;
        d=d*i;     
    }
    printf("%d",d);
    return 0;
}