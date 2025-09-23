// put.c
#include <stdio.h>

#define EN_MSG "I'm sleepy."
#define KO_MSG "배고파 죽겠다~"

int main() {
	// 0. printf() // 서식 문자열 출력하기
	printf("Using printf(): %s", EN_MSG);
	
	// 1. puts() // 문자열 출력하기
	puts("\nUsing puts(): ");
	puts(KO_MSG); // 줄바꿈 자동 추가

	// 2. putchar() // 문자 출력하기
	puts("\nUsing putchar(): ");
	for (int i = 0; i < EN_MSG[i] != '\0'; i++)
		putchar(EN_MSG[i]);

	// 3. putc() // 문자 출력하기
	puts("\nUsing putc(): ");
	for (int i = 0; i < EN_MSG[i] != '\0'; i++)
		putc(EN_MSG[i], stdout);

	return 0;
}
