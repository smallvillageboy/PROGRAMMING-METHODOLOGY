//merge 2 array to third array
#include <stdio.h>
#include <stdlib.h>

int * merge_2array(int *a1, int s1, int *a2, int s2) {
	int *a3=calloc(s1+s2, sizeof(int));
	for (int i=0; i<s1; i++)
			a3[i] = a1[i];
	for (int i=0; i<s2; i++){
			a3[s1+i] = a2[i];
	}
	free(a3);
	return a3;
}
int main() {
	//input
	int size1,size2;
	int *arr1 = calloc(size1, sizeof(int));
	int *arr2 = calloc(size2, sizeof(int));
	printf("enter size of first array ");
	
	scanf("%d", &size1);
	// khoi tao
	
	for (int i=0; i<size1; i++) {
		scanf("%d", &*(arr1 + i));
	}

	printf("enter size of second array ");
	scanf("%d", &size2);
	for (int i=0; i<size2; i++) {
		scanf("%d", &*(arr2+i));
	}

	int *arr3 = merge_2array(arr1, size1, arr2, size2);
	for (int j=0; j<size1+size2; j++)
		printf("%d ", *(arr3+j));
	free(arr1);
	free(arr2);
	return 0;
}	
