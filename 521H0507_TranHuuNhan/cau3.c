#include <stdio.h>
#include <math.h>

int main() {
	float x0, y0, r, xa, ya;
	printf("nhap x0");
	scanf("%f", &x0);
	printf("nhap y0");
	scanf("%f", &y0);
	printf("nhap ban kinh r = ");
	scanf("%f", &r);
	printf("nhap xa ");
	scanf("%f%f", &xa);
	printf("nhap ya ");
	scanf("%f", &ya);
	
	float d;
	d = sqrt((xa - x0)*(xa -x0) + (ya - y0)*(ya - y0));
	if (d == r) {
		printf("diem A nam tren duong tron");
	}
	else if (d > r) {
		printf("diem A nam ngoai duong tron");
	}
	else {
		printf("diem A nam trong duong tron");
	}
	return 0;
}