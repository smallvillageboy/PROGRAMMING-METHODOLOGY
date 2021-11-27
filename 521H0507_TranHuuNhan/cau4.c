#include <stdio.h>
#include <math.h>

int tam_giac_hop_le(int a, int b, int c) {
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		return 1;
	}
	else {
		return 0;
	}
}
int tam_giac_can(int a, int b, int c) {
	if ((a == b) || (a == c) || (b == c)) {
		return 1;
	}
	else {
		return 0;
	}
}
int tam_giac_deu(int a, int b, int c) {
	if ((a == b) && (a == c)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(){
	float a, b, c;
	printf("nhap 3 canh cua tam giac\n");
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);

	if (tam_giac_hop_le(a,b,c) == 0) {
		printf("gia tri khong hop le");
		return 0;
	}
	else {
		float chuvi = a+b+c;
		float p = chuvi/2.0;
		float dien_tich = sqrt(p*(p-a)*(p-b)*(p-c));

		printf("chu vi la %f", chuvi);
		printf("\ndien tich la %f\n", dien_tich);
		
		if (tam_giac_can(a, b, c)) {
			printf("day la tam giac can");
		}
		else if (tam_giac_deu(a, b, c)) {
			printf("day la tam giac deu");
		}
		else {
			printf("day la tam giac thuong");
		}
		return 0;
	}	
}