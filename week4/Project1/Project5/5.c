#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name[50];

	printf("이름을 입력하세요 >>> ");
	scanf("%s", name);

	printf("이름: %s\n", name);

	return 0;
}