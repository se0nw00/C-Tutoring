#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[5];
	float sum = 0;
	int i;
	float score;

	printf("5명의 학생 점수를 입력하세요 >>> ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 5; i++) {
		sum = sum + num[i];
	}

	score = sum / 5;

	printf("평균: %f", score);

	return 0;
}