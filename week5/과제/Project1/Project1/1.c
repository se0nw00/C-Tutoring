#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[50];
	char str2[50];
	int lenght1, lenght2, maxLenght;

	// ���ڿ� �Է¹ޱ�
	printf("ù ��° ���ڿ� �Է� >> ");
	scanf("%s", str1);
	printf("�� ��° ���ڿ� �Է� >> ");
	scanf("%s", str2);

	// �� ���ڿ��� ���� ���
	lenght1 = strlen(str1);
	lenght2 = strlen(str2);

	// �� �� ���ڿ� ã��
	if (lenght1 < lenght2) {
		maxLenght = lenght2;
	}
	else {
		maxLenght = lenght1;
	}

	printf("�� �� ���ڿ��� ����: %d\n", maxLenght);

	return 0;
}
