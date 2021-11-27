#include <stdio.h>
#include <stdlib.h>
int delete_array(int*a, int size);
int main() {
	printf("enter size of array ");
	int n;
	scanf("%d", &n);
	int *a= calloc(n, sizeof(int));
	int i;
	// doc du lieu
	for (i=0; i<n; i++){
		scanf("%d", &*(a+i));
	}

	int m = delete_array(a, n);
	//in kq
	for (i=0; i<m; i++)
		printf("%d ", *(a+i));
	free(a);
	return 0;
}
int delete_array(int *p, int size) {
	int i=0, b[size];
	for (int k=0; k<size; k++){
		*(b+k)=1;
	}
	do {
		for (int j=i+1; j<size; j++) {
			if (*(p+i) == *(p+j))
				*(b+j)= *(b+j)+1;
		}
		i++;
	}while (i<size);
	i=0;
	for (int j=0; j<size; j++)
		if (*(b+j)==1)
			p[i++]=p[j];
	return i;
}