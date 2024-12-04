#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수 선언
int add(int a, int b);

int main() {

	int num1 = 10;
	int num2 = 20;

	// int sum = num1 + num2;
	// 함수 호출
	int sum = add(num1, num2); // => int sum = 30;

	printf("합계: %d\n", sum);

	return 0;
}

// 함수 정의
int add(int a, int b) { // num1, num2
	return a + b; // 10 + 20 = 30
}