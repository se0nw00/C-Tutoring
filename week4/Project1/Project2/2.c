#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[3];
	int i;
	int sum = 0;

	// 사용자에게 정수를 입력받기
	printf("3개의 정수를 입력하세요 >>> ");

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	// 합하기
	for (i = 0; i < 3; i++) {
		sum = sum + num[i];
	}

	printf("배열의 합: %d\n", sum);

	return 0;
}