#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	int hour;
	int min;
	int sec;

	printf("�ʸ� �Է��ϼ��� >>> ");
	scanf("%d", &num);

	hour = num / 3600;
	min = (num % 3600) / 60;
	sec = (num % 3600) % 60;

	printf("��ȯ ����� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);

	return 0;

}