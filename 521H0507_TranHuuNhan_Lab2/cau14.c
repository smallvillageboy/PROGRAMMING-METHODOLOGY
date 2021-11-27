#include<stdio.h>  
void main()  
{  
    int n, r, s = 0, i;  
    printf("Enter number\n");  
    scanf("%d", &n);      
    for(i = 1; i < n; i++)  
    {  
        r = n % i;  
        if (r == 0)  
        {  
            s = s + i;  
        }  
    }  
    if (s == n)  
    {
        printf("%d is a perfect number",n);
    }     
    else 
    {
         printf("%d is not a perfect number",n);
    }       
}  