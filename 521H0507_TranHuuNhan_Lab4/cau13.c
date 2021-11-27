#include <stdio.h>
#include <stdlib.h>
void even_and_odd(int *a, int n) {
	int pos=-1;
	for (int i=0; i<n; i++)
		if (a[i]%2 == 0){
			pos++;
			int tmp = a[i];
			a[i]=a[pos];
			a[pos]=tmp;
		}
}
int main() {
	printf("enter size of array ");
	int size;
	scanf("%d", &size);
	int *a = calloc(size, sizeof(int));
	int i;
	for (i=0; i<size; i++) {
		scanf("%d", &*(a+i));
	}
	even_and_odd(a, size);
	for (i=0; i<size; i++)
		printf("%d ", *(a+i));
	free(a);
	return 0;
}