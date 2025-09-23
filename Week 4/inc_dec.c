// inc_dec.c
// RNC (RED = 윤석열) DEC (Blue = 이재명)
// Republican National Convention (Trump)
// Democratic National Convention (Biden)
#include <stdio.h>

int main() {
	int x = 5;
	int y;
	int post, pre;

	printf("x: %d\n", x);
	y = x;
	printf("y: %d\n", y); // 5

	post = x++; // 6
	printf("x++: %d, x: %d\n", post, x); // 6, 6
	printf("x: %d\n", x); // 6

	pre = ++y; // 6
	printf("++y: %d, y: %d\n", pre, y); // 6, 6
	printf("y: %d\n", y); // 6

	return 0;
}