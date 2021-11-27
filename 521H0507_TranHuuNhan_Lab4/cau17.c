#include <stdio.h>   
int main()   
{  
    int m=3, n=3, d[3][3], i, j;
    int f[3][3] = {{1,2,3},{2,3,4},{2,3,4}}; 
    int s[3][3] = {{9,8,7},{8,7,6},{8,7,6}};
    printf("result \n");  
    for (i = 0; i < m; i++)   
    {  
        for (j = 0; j < n; j++)   
        {  
            d[i][j] = f[i][j] - s[i][j];  
            printf("%d\t", d[i][j]);  
        }  
        printf("\n");  
    }  
    return 0;  
} 
