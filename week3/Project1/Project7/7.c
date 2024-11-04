#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int i = 1;
	int n = 0;
	int sum = 0;

	printf("정수를 입력하세요 >>> ");
	scanf("%d", &n);

	// 1부터 n까지 합을 계산하는 while
	while (i <= n) { // 5, 1+2+3+4+5 = sum
		sum = sum + i; // sum = 1+2+3+4+5 = 15
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;
}