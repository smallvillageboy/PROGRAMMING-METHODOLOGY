#include <stdio.h>
#include <math.h>

int main()
{
    int f,l,i,n,d=-1;
    printf("enter number >0 ");
    scanf("%d", &n);
    i=n;
    while (i>0)
    {
        i=i/10;
        d++;
    }
    printf("first digit is %d",n/(int)pow(10,d));
    printf("\nlast digit is %d",n%10);
    return 0;
}