#include <stdio.h>

int main()
{
	int year;
	printf("please enter year ");
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
	{
		printf("%d is leap year",year);
	}	
	else
	{
		printf("%d isn't leap year",year);
	}
	return 0;
}