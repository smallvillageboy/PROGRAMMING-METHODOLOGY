#include <stdio.h>

int main()
{
	int num;
	printf("please enter number to check even or odd ");
	scanf("%d", &num);
	if (num % 2 == 0) 
		printf("%d is even number", num);
	else
		printf("%d is odd number", num);
	return 0;
}