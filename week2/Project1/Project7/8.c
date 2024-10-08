#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name;
	int inum;
	float fnum;

	scanf("%c", &name);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	printf("====Ãâ·Â====\n");
	printf("%c\n", name);
	printf("%d\n", inum);
	printf("%f\n", fnum);

	return 0;
}