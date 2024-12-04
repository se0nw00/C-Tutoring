#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float convert(float cm) {
	float m = cm / 100.0;
	return m;
}

int main() {

	float cm, m;

	printf("키를 cm 단위로 입력하세요: ");
	scanf("%f", &cm);

	// cm를 m으로 변환
	
	m = cm / 100.0;

	printf("키는 %.2fm입니다.\n", m);

	return 0;
}