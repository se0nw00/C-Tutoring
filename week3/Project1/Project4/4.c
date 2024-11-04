#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int num;

	while (1) { // 무한 루프
		printf("숫자를 입력하세요 (0을 입력하면 종료) >>> ");
		scanf("%d", &num);

		printf("입력한 숫자는 %d입니다.\n", num);

		if (num == 0) {
			break; // 0이 입력되면 반복문을 강제로 종료
		}
	}

	printf("프로그램을 종료합니다.\n");

	return 0;
}