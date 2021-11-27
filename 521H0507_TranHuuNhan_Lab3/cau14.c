#include <stdio.h>

int perfect_number(int x) {
    int s = 0;
    for(int i = 1; i < x; i++)  
    {  
        if (x % i == 0)  
        {  
            s = s + i;  
        }  
    }
    return s; 
}

void main()
{  
    int num;
    printf("Enter number: ");  
    scanf("%d", &num);      
    
    if (num == perfect_number(num))  
    {
        printf("%d is a perfect number", num);
    }     
    else 
    {
         printf("%d is not a perfect number", num);
    }       
}