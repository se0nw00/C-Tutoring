#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name[10];
	char num[15];

	printf("�̸��� �Է��ϼ��� >>> ");
	scanf("%s", name);

	printf("�й��� �Է��ϼ��� >>> ");
	scanf("%s", num);

	printf("�̸�: %s, �й�: %s", name, num);

	return 0;
}