#include <stdio.h>
int main(){
		int n, s=0, i;
		printf("enter number: ");
		scanf("%d", &n);
		while (n<=0){
			printf("enter again: ");
			scanf("%d",&n);
		}
		//loop for
		for (i=3; i<=n; i+=2){
			if (i!=n)
				s=s+i;
		}
		printf("loop for sum odd = %d\n",s);
		//loop do
		s=0; i=3;
		while (i<n){
			s=s+i;
			i+=2;
		}
		printf("loop do sum = =%d\n",s);
		//loop do while
		s=-1; i=1;
		do
		{
			s=s+i;
			i=i+2;
		} while (i<n);
		printf("loop do while sum= %d",s);
		return 0;
}