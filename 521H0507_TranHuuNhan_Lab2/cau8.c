#include <stdio.h>
int main()
{
    int n,d=0;
    scanf("%d",&n);
    while (n<0)
    {
        printf("nhap lai ");
        scanf("%d",&n);
    }

    if (n<10){
        printf("1 digit");
    }
    else {
        while (n>0) {
            n=n/10;
            d++;
         }
    printf("%d digits",d);
    } 
    return 0;
}