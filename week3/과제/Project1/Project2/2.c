#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	char score;

	printf("������ �Է��ϼ��� >>> ");

	scanf("%d", &n);

	if (n >= 90 && n <= 100) {
		score = 'A';
	}
	else if (n >= 80 && n <= 89) {
		score = 'B';
	}
	else if (n >= 70 && n <= 79) {
		score = 'C';
	}
	else if (n >= 60 && n <= 69) {
		score = 'D';
	}
	else {
		score = 'F';
	}

	printf("������ %d���̰�, ������ %c�����Դϴ�." , n, score);

	return 0;
}