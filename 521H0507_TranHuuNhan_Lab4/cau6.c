#include <stdio.h>

int sum_even(int *_p, int _size) {
	int s=0;
	for (int i=0; i<_size; i++) {
        if (*(_p+i) % 2 ==0)
		    s += *(_p+i);
	}
	return s;
}
int main() {
	printf("enter size of array ");
	int size, *p;
	scanf("%d", &size);
	for (int i=0; i<size; i++) {
		scanf("%d", &*(p+i));
	}
	int result = sum_even(p, size);
	printf("sum even numbers = %d", result);
	return 0;
}