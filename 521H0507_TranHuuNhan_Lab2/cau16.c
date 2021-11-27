#include <stdio.h>
#include <math.h>
int check(int k)
{
    int m=k,d=0;
    while (m>0){
        d=d+pow(m%10,3);
        m=m/10;
    }
    if (d==k)
        return 0;
    else    
        return 1;
}

int main()
{
    int n;
    printf("nhap so ");
    scanf("%d",&n);
    while (n<0){
        printf("nhap lai ");
        scanf("%d",&n);
    }
    for (int j=1;j<=n;j++)
        if (check(j)==0)
            printf("%d ",j);  
    printf("\n");
    int i=0;
    while (i<n)
    {
        i++;
        if (check(i)==0)
            printf("%d ",i);
    }
    printf("\n");
    int j=1;
    do{
        if (check(j)==0)
            printf("%d ",j);
        j++;
    }while (j<=n);
    
    return 0;
}