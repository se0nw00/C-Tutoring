#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float convert(float cm) {
	float m = cm / 100.0;
	return m;
}

int main() {

	float cm, m;

	printf("Ű�� cm ������ �Է��ϼ���: ");
	scanf("%f", &cm);

	// cm�� m���� ��ȯ
	
	m = cm / 100.0;

	printf("Ű�� %.2fm�Դϴ�.\n", m);

	return 0;
}