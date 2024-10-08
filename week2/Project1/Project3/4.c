#include <stdio.h>

int main() {

	char name1, name2;
	name1 = 'a';
	name2 = '1'; // 숫자가 아님!

	char name3 = 'h'; // 문자 1개만 저장 가능

	printf("%c\n", name1);
	printf("%c", name2);
	printf("%c동", name3);

	return 0;
}