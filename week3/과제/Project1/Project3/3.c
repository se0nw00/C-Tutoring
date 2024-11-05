#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i;

	for (i = 1; i <= 100; i++) {
		if (i % 6 != 0) {
			continue;
		}

		printf("%d ", i);
	}

	return 0;
}