#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a = 7;
	int* p;

	printf("%d\n", a);
	printf("%p\n", &a);

	p = &a;

	printf("%d\n", *p);

	*p = 10;
	printf("%d\n", *p);

	return 0;
}