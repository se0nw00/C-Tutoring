#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int age;

	printf("나이를 입력하세요 >>> ");

	scanf("%d", &age);

	if (age <= 7) {
		printf("미취학");
	}
	else if (age >= 8 && age <= 13) {
		printf("초등학생");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생");
	}
	else {
		printf("성인");
	}

	return 0;
}