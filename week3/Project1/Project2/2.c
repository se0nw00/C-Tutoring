#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int age;

	printf("���̸� �Է��ϼ��� >>> ");

	scanf("%d", &age);

	if (age <= 7) {
		printf("������");
	}
	else if (age >= 8 && age <= 13) {
		printf("�ʵ��л�");
	}
	else if (age >= 14 && age <= 16) {
		printf("���л�");
	}
	else if (age >= 17 && age <= 19) {
		printf("����л�");
	}
	else {
		printf("����");
	}

	return 0;
}