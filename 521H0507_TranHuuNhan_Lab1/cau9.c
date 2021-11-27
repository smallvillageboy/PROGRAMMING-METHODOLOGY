#include <stdio.h>

int main()
{
	int num1,num2,num3,max;
	
	printf("enter three numbers to compare ");
	scanf("%d%d%d", &num1, &num2, &num3);

	max = num1;

	if (num1 == num2 && num2 == num3)
	{
		printf("Equal Value");
	}   
	if (max < num2)
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}

	printf("Maximum is %d", max);
	return 0;
}