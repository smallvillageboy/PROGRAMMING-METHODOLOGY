#include <stdio.h>
#include <math.h>
int main()
{
    printf("nhap so ");
    int n,i=-1;
    char a[100];
    scanf("%d",&n);
    while (n<0)
    {
        printf("nhap lai ");
        scanf("%d",&n);
    }
    
    if (n<10)
    {
        printf("%d",n);
    }
    else
    {
        while (n > 0)
        {
            i++;
            a[i] = n % 10; 
            n = n / 10;
        }
        printf("%d",a[0]);
        for (int j=i-1;j>0;j--)
            printf("%d",a[j]);
        printf("%d",a[i]);    
    }  
   return 0;
}