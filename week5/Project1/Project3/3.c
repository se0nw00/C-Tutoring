#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str1[50] = "Hello";
	char str2[50] = "World!";

	strcat(str1, str2);

	printf("�̾� ���� ���: %s\n", str1);

	return 0;
}