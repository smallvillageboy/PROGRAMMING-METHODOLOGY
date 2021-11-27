#include <stdio.h>

int min_of_array(int *p, int size) {
	int min = *p;
	for (int i=0; i<size; i++) {
		if (*(p+i) < min)
			min = *(p+i);
	}
	return min;
}

int main() {
	printf("enter size of array number ");
	int* pointer, size, index=-1;
	scanf("%d", &size);
	while (index < size-1) {
		index++;
		printf("a[%d] = ", index+1);
		scanf("%d", &*(pointer+index));
	}
	printf("minimum is %d", min_of_array(pointer,size));
	return 0;
}