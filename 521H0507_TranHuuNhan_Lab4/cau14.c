#include <stdio.h>
#include <stdlib.h>
int arr[100];
int search_element(int *a, int size, int key);
int main() {
	int size, i,key;
	printf("enter size of array ");
	scanf("%d", &size);
	int *a=calloc(size, sizeof(int));
	for (i=0; i<size; i++) {
		scanf("%d", &*(a+i));
	}
	printf("enter key ");
	scanf("%d", &key);
	printf("position of key in array \n");
	int m = search_element(a, size, key);
	for (i=0; i<m; i++)
		printf("%d ", *(arr+i));
	return 0;
}
int search_element(int *a, int size, int key) {
	int d=0;
	for (int i = 0; i < size; i++)
		if (*(a+i) == key) {
			arr[d++]= i;
		}
	return d;
}