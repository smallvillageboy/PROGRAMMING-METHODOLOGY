#include <stdio.h>
#define con 33.8f
int main()
{
            float Ce,F=0;
            printf("Enter Celsius ");
            scanf("%f", &Ce);
            if (Ce == 0)
            {
               F = 32;
            }
            else
            {
               F = con * Ce;       
            }
            printf("%.1f oC = %.1f F", Ce, F);
            return 0;
}