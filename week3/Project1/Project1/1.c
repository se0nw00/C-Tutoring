#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;

	printf("10~99 ������ ������ �Է��ϼ��� >>> ");

	scanf("%d", &num);

	// 45 = (4X10)+5

	int a = num / 10;
	int b = num % 10;

	printf("���� �ڸ�: %d\n", a);
	printf("���� �ڸ�: %d\n", b);

	return 0;
}