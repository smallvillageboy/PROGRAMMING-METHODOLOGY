#include <stdio.h>

int main() {
	int tien;
	printf("nhap so tien can doi ");
	scanf("%d", &tien);
	if (tien % 10000 != 0)
	{
		printf("Nhap du lieu sai");
		return 0;
	}
	else {
		int tiendu = 0, tien500k = 0, tien100k = 0, tien50k = 0, tien20k = 0, tien10k = 0;
		
		tien500k = tien / 500000;
		tiendu = tien%500000;
		
		if (tiendu != 0) {
			tien100k = tiendu/100000;
			tiendu = tiendu%100000;
			if (tiendu !=0) {
				tien50k = tiendu/50000;
				tiendu = tiendu%50000;
				if (tiendu !=0) {
					tien20k = tiendu/20000;
					tiendu = tiendu%20000;
					if (tiendu != 0) {
						tien10k = tiendu/10000;
					}
				}
			}
		}
		printf("\nso tien doi ra la \n");
		if (tien500k >0) {
			printf("%d to 500,000", tien500k);
		}
		if (tien100k >0) {
			printf("\n%d to 100,000", tien100k);
		}
		if (tien50k >0) {
			printf("\n%d to 50,000", tien50k);
		}
		if (tien20k > 0) {
			printf("\n%d to 20,000", tien20k);
		}
		if (tien10k > 0) {
			printf("\n%d to 10,000", tien10k);
		}
		return 0;
	}	
}