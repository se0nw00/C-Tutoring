#include <stdio.h>

int main() {

	int num[3] = { 1, 2, 3 };

	char arr[2];

	arr[0] = 'a';
	arr[1] = 'b';

	printf("%d %d %d\n", num[0], num[1], num[2]);
	printf("%c %c\n", arr[0], arr[1]);


	return 0;
}