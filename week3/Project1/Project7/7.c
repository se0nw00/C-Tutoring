#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int i = 1;
	int n = 0;
	int sum = 0;

	printf("������ �Է��ϼ��� >>> ");
	scanf("%d", &n);

	// 1���� n���� ���� ����ϴ� while
	while (i <= n) { // 5, 1+2+3+4+5 = sum
		sum = sum + i; // sum = 1+2+3+4+5 = 15
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}