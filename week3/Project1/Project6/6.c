#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i;

	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) { // i°¡ Â¦¼öÀÏ ¶§
			continue;
		}

		printf("%d\n", i);
	}

	return 0;
}