#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num;
	int hour;
	int min;
	int sec;

	printf("초를 입력하세요 >>> ");
	scanf("%d", &num);

	hour = num / 3600;
	min = (num % 3600) / 60;
	sec = (num % 3600) % 60;

	printf("변환 결과는 %d시간 %d분 %d초입니다.", hour, min, sec);

	return 0;

}