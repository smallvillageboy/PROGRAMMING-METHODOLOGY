#include <stdio.h>
int main()
{
    int n,d=0;
    printf("nhap so >=0 ");
    scanf("%d",&n);

    if (n<10)
        printf("%d",n);
    else{
            while (n>0)
            {
                d=d*10+n%10;
                n=n/10;
            }
            printf("%d",d);
    }
    
    return 0;
}