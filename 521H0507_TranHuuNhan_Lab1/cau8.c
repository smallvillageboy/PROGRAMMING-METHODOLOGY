#include <stdio.h>

int main()
{
	int num1,num2;
	
	printf("enter two numbers to compare ");
	scanf("%d%d", &num1, &num2);
	if (num1 == num2)
	{
		printf("Equal Value");
	}
	else if (num1 > num2)
	{
		printf("Maximun is %d", num1);
	}
	else
	{
		printf("Maximum is %d", num2);
	}
	return 0;
}