#include <stdio.h>
int main()
{
	int num, sum=0,i;
	printf("enter number: ");
	scanf("%d", &num);
	while (num <= 0){
		printf("enter again: ");
		scanf("%d", &num);
	}
	// loop for
	for (i = 0; i < num; ){
		sum += i;
		i=i+2;
	}
	printf("loop for sum = %d\n",sum);
	// loop while
	i=sum=0;
	while (i<num){
		sum += i;
		i+=2;
	}
	printf("loop while sum = %d\n",sum);
	//loop do while
	i=sum=0;
	do{
		sum+=i;
		i+=2;
	}while (i<num);
	printf("loop do while sum = %d",sum);
	return 0;
}
