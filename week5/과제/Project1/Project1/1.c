#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[50];
	char str2[50];
	int lenght1, lenght2, maxLenght;

	// 문자열 입력받기
	printf("첫 번째 문자열 입력 >> ");
	scanf("%s", str1);
	printf("두 번째 문자열 입력 >> ");
	scanf("%s", str2);

	// 각 문자열의 길이 계산
	lenght1 = strlen(str1);
	lenght2 = strlen(str2);

	// 더 긴 문자열 찾기
	if (lenght1 < lenght2) {
		maxLenght = lenght2;
	}
	else {
		maxLenght = lenght1;
	}

	printf("더 긴 문자열의 길이: %d\n", maxLenght);

	return 0;
}
