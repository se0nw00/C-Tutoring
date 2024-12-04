#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputNum() {

	int a;

	printf("아무 정수를 입력하세요 >> ");
	scanf("%d", &a);

	return a;
}

int main() {

	// 입력값 x, 반환값 o

	int num;

	num = inputNum();

	printf("반환된 값: %d\n", num);

	return 0;
}