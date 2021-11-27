#include <stdio.h>
int main()
{
    int n,d=0;
    printf("nhập số ");
    scanf("%d",&n);

    while (n<=0){
        printf("nhập lại số ");
        scanf("%d",&n);
    }
    for (int i=2;i<n;i++) {
        d+=i;
    }
    printf("%d",d);
    // while
    int i=0;
    d=0;
    while (i<n)
    {
        i++;
        if (i!=1 && i!=n)
            d=d+i;
    }
    printf("\n%d",d);
    d=i=0;
    do
    {
        if (i!=1)
            d=d+i;
        i++;    
    } while (i!=n);
    printf("\n%d",d);
    return 0;
}