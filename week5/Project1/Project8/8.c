#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inputNum() {

	int a;

	printf("�ƹ� ������ �Է��ϼ��� >> ");
	scanf("%d", &a);

	return a;
}

int main() {

	// �Է°� x, ��ȯ�� o

	int num;

	num = inputNum();

	printf("��ȯ�� ��: %d\n", num);

	return 0;
}