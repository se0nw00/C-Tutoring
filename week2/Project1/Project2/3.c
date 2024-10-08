#include <stdio.h>

int main() {

	float f1, f2;
	f1 = 3.1;
	f2 = 0.9;

	float f3 = 1; // 1.0000 소수로 저장됨

	printf("%f\n", f1);
	printf("%f\n", f2);
	printf("%f번", f3);

	return 0;
}