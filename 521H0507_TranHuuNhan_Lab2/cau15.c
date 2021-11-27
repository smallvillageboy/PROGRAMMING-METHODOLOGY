#include <stdio.h>
#include <math.h>

int is_prime(int l)
{
    if (l==2) return 0;
    for (int i=2;i<=sqrt(l);i++)
        if (l%i==0)
        {
            return 1;
        }
    return 0;
}
int main()
{
    int n,d=0;
    printf("nhap so ");
    scanf("%d",&n);
    while (n<2){
        printf("nhap lai ");
        scanf("%d",&n);
    }
    for (int j=2;j<=n;j++)
        if (is_prime(j)==0)
            printf("%d ",j);  
    printf("\n");
    int i=1;
    while (i<n)
    {
        i++;
        if (is_prime(i)==0)
            printf("%d ",i);
    }
    printf("\n");
    int j=2;
    do{
        if (is_prime(j)==0)
            printf("%d ",j);
        j++;
    }while (j<=n);    
    return 0;
}