#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	int res;

	printf("ù ��° ���� >> ");
	scanf("%d", &a);

	printf("�� ��° ���� >> ");
	scanf("%d", &b);

	// ����� ���� �Լ� ȣ��
	res = multiply(a, b);

	printf("�� ������ ��: %d\n", res);

	return 0;
}