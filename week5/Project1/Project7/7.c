#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hello(char n[]) {
	printf("�̸��� %s", n);
}

int main() {

	//�Է°� o, ��ȯ�� x

	char name[20];

	printf("����� �̸���? ");
	scanf("%s", name);

	hello(name);

	return 0;
}