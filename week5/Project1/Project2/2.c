#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char str1[] = "Hello World!";
	char str2[50];

	strcpy(str2, str1);

	print("���� ���ڿ�: %d\n", str1);
	print("����� ���ڿ�: %d\n", str2);

	return 0;
}