#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num[3];
	int i;
	int sum = 0;

	// ����ڿ��� ������ �Է¹ޱ�
	printf("3���� ������ �Է��ϼ��� >>> ");

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	// ���ϱ�
	for (i = 0; i < 3; i++) {
		sum = sum + num[i];
	}

	printf("�迭�� ��: %d\n", sum);

	return 0;
}