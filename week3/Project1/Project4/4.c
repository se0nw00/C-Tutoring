#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num;

	while (1) { // ���� ����
		printf("���ڸ� �Է��ϼ��� (0�� �Է��ϸ� ����) >>> ");
		scanf("%d", &num);

		printf("�Է��� ���ڴ� %d�Դϴ�.\n", num);

		if (num == 0) {
			break; // 0�� �ԷµǸ� �ݺ����� ������ ����
		}
	}

	printf("���α׷��� �����մϴ�.\n");

	return 0;
}