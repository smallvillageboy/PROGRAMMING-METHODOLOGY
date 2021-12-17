#include<stdio.h>
#include <string.h>

int main()
{
	char name[101];
	printf("nhap ten ");
	fgets(name, 101, stdin); //doc ten
	for (int i = 0; i<= strlen(st); i++) {
		if (st[i] == '\0') {
			printf("do dai cua chuoi ki tu la %ld", i-1);
			return 0;
		}
	}
}