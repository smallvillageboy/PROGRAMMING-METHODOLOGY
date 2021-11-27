#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("Enter Number ");
	scanf("%d", &num);
	printf("|%d| = %d", num, abs(num));
	return 0;
}