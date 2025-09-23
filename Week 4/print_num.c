// print_num.c
#include <stdio.h>

int main() {
	int num = -1;
	
	printf("%d %u", num, num); // %d 부호 있는 정수, %u 부호 없는 정수

	int small = 7,
		mid = 197,
		big = 77441;

	printf("\n===========================\n");
	printf("%5d\t%05d\t%-5d\n", small, small, small);
	printf("%5d\t%05d\t%-5d\n", mid, mid, mid);
	printf("%5d\t%05d\t%-5d\n", big, big, big);

	return 0;
}