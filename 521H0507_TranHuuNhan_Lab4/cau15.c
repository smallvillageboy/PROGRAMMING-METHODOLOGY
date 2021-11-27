#include <stdio.h>
void sort_acending(int *a, int s) {
	for (int i=0; i<s-1; i++)
		for (int j=i+1; j<s; j++)
			if (*(a+i)>*(a+j))
			{
				int t = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = t;
			}
}
int main() {
	printf("enter size of array ");
	int s;
	scanf("%d", &s);
	int *a;
	for (int i=0; i<s; i++) {
		scanf("%d", &*(a+i));
	}
	sort_acending(a, s);
	for (int i=0; i<s; i++)
		printf("%d ", *(a+i));
	return 0;
}