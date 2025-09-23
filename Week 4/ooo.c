// ooo.c
// Order Of Operations
#include <stdio.h>

int main() {
	// Slide 70 우선 순위
	int a = 3 + 5 * 2 - 5;
	int b = 4 * 2 / 3 + 1;
	double c = 4 * 2. / 3 + 1;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%f\n", c);

	return 0;
}
