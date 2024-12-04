#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str[100];

	printf("문자열을 입력하세요: ");
	scanf("%s", str);

	int length = strlen(str);

	printf("입력한 문자열의 길이: %d\n", length);

	return 0;
}