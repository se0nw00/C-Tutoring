#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[100];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);

	int length = strlen(str);

	printf("�Է��� ���ڿ��� ����: %d\n", length);

	return 0;
}