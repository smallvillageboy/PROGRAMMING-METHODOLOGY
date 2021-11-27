#include <stdio.h>
int check2(int k);
void main()
{
    int n;
    printf("nhap so ");
    scanf("%d",&n);

    while (n<=0)
    {
        printf("nhap lai ");
        scanf("%d",&n);
    }
    printf("so hoan hao tu 1 den %d la ",n);

    for (int j=1;j<=n;j++)
        if (check2(j)==0)
            printf("%d ",j);  
    printf("\n");

    int i=0;
    while (i<n)
    {
        i++;
        if (check2(i)==0)
            printf("%d ",i);
    }
    printf("\n");
    
    int j=0;
    do{
        j++;
        if (check2(j)==0)
            printf("%d ",j);
       
    }while (j<n);
}
int check2(int k)
{
    int r,s=0;
    for(int i = 1; i < k; i++)  
    {  
        r = k % i;  
        if (r == 0)  
        {  
            s = s + i;  
        }  
    }  
    if (s == k)  
    {
        return 0;
    }     
    else 
    {
         return 1;
    }
}
