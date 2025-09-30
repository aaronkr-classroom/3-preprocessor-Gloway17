// hw.c
#include <stdio.h>

int data = 5, result = 0;

void reset() { data = 5, result = 0;}

int main() {
	result = data % 2;
	printf("Q1 result = data %% 2;\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = data < 2;
	printf("Q2 result = data < 2;\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = data < 4 + 3;
	printf("Q3 result = data < 4 + 3;\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = data++ + 2;
	printf("Q4 result = data++ + 2;\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = data == 5;
	printf("Q5 result = data == 5;\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = data != 5 && (data = 0);
	printf("Q6 result = data != 5 && (data = 0);\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = --result && (data = 0);
	printf("Q7 result = --result && (data = 0);\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = result-- && (data = 0);
	printf("Q8 result = result-- && (data = 0);\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	result = result-- || (data = 0);
	printf("Q9 result = result-- || (data = 0);\n");
	printf("\t(result: %d)\n\n", result);
	reset();

	return 0;
}