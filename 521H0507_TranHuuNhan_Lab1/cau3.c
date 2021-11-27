#include <stdio.h>

int main()
{
            float width, height;
            printf("Please Enter the Width and Height of the rectangle ");
            scanf("%f%f", &width, &height);
            printf("Perimeter is %.2f\n", 2 * (width + height));
            printf("Area is %.2f", width * height);
            return 0;
}