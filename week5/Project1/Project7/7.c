#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hello(char n[]) {
	printf("이름은 %s", n);
}

int main() {

	//입력값 o, 반환값 x

	char name[20];

	printf("당신의 이름은? ");
	scanf("%s", name);

	hello(name);

	return 0;
}