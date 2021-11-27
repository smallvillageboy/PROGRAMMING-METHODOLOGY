#include <stdio.h>
int main(void){

    printf("enter number: ");
    int a;
    scanf("%d", &a);
    for (int i=1; i<=10; i++)
    {
        for(int j=1; j<=a; j++)
        {
            printf("%-2d x %-2d = %-4d  ", i,j,i*j);
        }
        printf("\n");
    }
      return 0;
}