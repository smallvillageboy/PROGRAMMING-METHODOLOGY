#include <stdio.h>
int main()
{
            float ang1,ang2,ang3;
            printf("input angles of a triangle ");
            scanf("%f%f%f", &ang1, &ang2, &ang3);
            if (ang1 + ang2 + ang3 == 180)
            {
                printf("triangle is valid");
            }
                        
            else
            {
                printf("triangle is not valid");
            }            
            return 0;
}