#include <stdio.h>

int sum(int *_p, int _size) {
	int s=0;
	for (int i=0; i<_size; i++) {
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
	int result = sum(p, size);
	printf("tong cac phan tu cua mang = %d", result);
	return 0;
}