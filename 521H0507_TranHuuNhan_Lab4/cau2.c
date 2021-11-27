#include <stdio.h>
#include <stdlib.h>

int max_of_array(int *p, int size) {
	int max = *p;
	for (int i=1; i<size; i++) {
		if (*(p+i) > max)
			max = *(p+i);
	}
	return max;
}

int main() {
	printf("enter size of array number ");
	int size, index=-1;
	scanf("%d", &size);
	int *pointer = calloc(size, sizeof(int));
	while (index < size-1) {
		index++;
		printf("a[%d] = ", index+1);
		scanf("%d", &*(pointer+index));
	}

	printf("maximum is %d", max_of_array(pointer,size));
	free(pointer);
	return 0;
}