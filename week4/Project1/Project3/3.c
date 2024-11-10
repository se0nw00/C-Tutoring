#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char name[] = "Tom~";

	printf("문자열의 길이는: %d\n", sizeof(name));

	/* sizeof = 배열에 들어있는 데이터 개수 확인 가능 */

	return 0;
}