#include <stdio.h>

int main()
{
            int years=0, weeks=0, days=0;
            printf("Enter days ");
            scanf("%d", &days);
            years = days / 365; 
            weeks = (days % 365) / 7;
            days = days - ((years*365) + (weeks*7));

            printf("%d Years\n", years);
            printf("%d Weeks\n", weeks);
            printf("%d Days\n", days);
            return 0;
}