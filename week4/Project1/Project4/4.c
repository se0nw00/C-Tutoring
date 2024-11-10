#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name[] = "my name is Tom~";

	printf("%s\n", name);

	name[4] = '\0';

	printf("%s\n", name);


	return 0;
}