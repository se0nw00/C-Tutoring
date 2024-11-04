#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	printf("10~99 사이의 정수를 입력하세요 >>> ");

	scanf("%d", &num);

	// 45 = (4X10)+5

	int a = num / 10;
	int b = num % 10;

	printf("십의 자리: %d\n", a);
	printf("일의 자리: %d\n", b);

	return 0;
}