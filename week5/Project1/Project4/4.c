#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[50] = "Hello";
	char str2[50] = "Hello";
	char str3[50] = "World";

	//���� ���ڿ��� ��
	if (strcmp(str1, str2) == 0) { // strcmp�� �� ���ڿ��� ������ 0�� ��ȯ
		printf("�� ���ڿ��� ����.\n");
	}
	else {
		printf("�� ���ڿ��� ���� �ʴ�.\n");
	}

	//�ٸ� ���ڿ��� ��
	if (strcmp(str1, str3) == 0) {
		printf("�� ���ڿ��� ����.\n");
	}
	else {
		printf("�� ���ڿ��� ���� �ʴ�.\n");
	}

	return 0;
}