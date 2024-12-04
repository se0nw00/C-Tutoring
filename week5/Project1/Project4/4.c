#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[50] = "Hello";
	char str2[50] = "Hello";
	char str3[50] = "World";

	//같은 문자열을 비교
	if (strcmp(str1, str2) == 0) { // strcmp는 두 문자열이 같으면 0을 반환
		printf("두 문자열이 같다.\n");
	}
	else {
		printf("두 문자열이 같지 않다.\n");
	}

	//다른 문자열을 비교
	if (strcmp(str1, str3) == 0) {
		printf("두 문자열이 같다.\n");
	}
	else {
		printf("두 문자열이 같지 않다.\n");
	}

	return 0;
}