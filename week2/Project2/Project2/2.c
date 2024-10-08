#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int age;
	int birth;
	int num;

	printf("====입력====\n");

	printf("나이는? ");
	scanf("%d", &age);

	printf("생일은? ");
	scanf("%d", &birth);

	printf("학번은? ");
	scanf("%d", &num);

	printf("====출력====\n");
	printf("나이: %d\n", age);
	printf("생일: %d\n", birth);
	printf("학번: %d\n", num);

	return 0;

}