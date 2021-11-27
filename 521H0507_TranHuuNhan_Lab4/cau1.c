#include <stdio.h>

float func1(float x) {
    if (x == 1)
        return 0.5;
    return (x/2) + func1(x-1);
}dfdf
float func2(float x) {
	if (x == 1)
		return 3;
	return (x*2+1) + func2(x-1);
}
int fact(float x) {
	if (x==0)
		return 1;
	return x * fact(x-1);
}
float func3(float x) {
	if (x == 1)
		return 2;
	return (fact(x)+1) + func3(x-1);
}
float func4(float x) {
	if (x == 1)
		return 1;
	return fact(x) + func4(x-1);
}
float func5(float x) {
	if (x == 1)
		return 2/3;
	return (2*x)/3 + func4(x-1);
}

int main() {
    printf("enter number ");
    float num;
    scanf("%f", &num);
	
    printf("a) %.1f\n", func1(num));
	printf("b) %.0f\n", func2(num));
	printf("c) %.0f\n", func3(num));
	printf("d) %.0f\n", func4(num));
	printf("e) %.4f\n", func5(num));
    return 0;
}
