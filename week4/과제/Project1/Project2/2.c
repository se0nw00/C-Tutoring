#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name[10];
	char num[15];

	printf("이름을 입력하세요 >>> ");
	scanf("%s", name);

	printf("학번을 입력하세요 >>> ");
	scanf("%s", num);

	printf("이름: %s, 학번: %s", name, num);

	return 0;
}