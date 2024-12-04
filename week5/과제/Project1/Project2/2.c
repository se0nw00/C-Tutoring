#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	int res;

	printf("첫 번째 숫자 >> ");
	scanf("%d", &a);

	printf("두 번째 숫자 >> ");
	scanf("%d", &b);

	// 사용자 정의 함수 호출
	res = multiply(a, b);

	printf("두 숫자의 곱: %d\n", res);

	return 0;
}