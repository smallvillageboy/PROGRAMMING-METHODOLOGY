#include <stdio.h>
int main()
{
    int n,d=0;
    printf("nhap so ");
    scanf("%d",&n);
    while (n<0){
        printf("nhap lai ");
        scanf("%d",&n);
    }
    if (n<10)
        printf("yes");
    else{
            int m=n;
            while (n>0)
            {
                d=d*10+n%10;
                n=n/10;
            }
            if (m==d)
                printf("yes");
            else    
                printf("no");
    }
    return 0;
}