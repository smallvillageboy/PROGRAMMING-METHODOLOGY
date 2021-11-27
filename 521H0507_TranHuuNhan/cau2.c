#include <stdio.h>
int main() {
	printf("nhap d = ");
	double d;
	scanf("%lf", &d);
	while (d <= 0) {
		printf("nhap lai d: ");
		scanf("%lf", &d);
	}
	
	if (d <= 1) {
		printf("tien la: %.0lf", d*18000);
	}
	else if (d <= 10) {
		printf("tien la: %.0lf", 18000 + (d-1)*8000);
	}
	else if (d <= 30) {
		printf("tien la: %.0lf", 18000+9*8000+(d-10)*6000);
	}
	else {
		printf("tien la: %.0lf", 18000+9*8000+20*6000+(d-30)*4000);
	}
	return 0;
}