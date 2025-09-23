// put.c
#include <stdio.h>

#define EN_MSG "I'm sleepy."
#define KO_MSG "����� �װڴ�~"

int main() {
	// 0. printf() // ���� ���ڿ� ����ϱ�
	printf("Using printf(): %s", EN_MSG);
	
	// 1. puts() // ���ڿ� ����ϱ�
	puts("\nUsing puts(): ");
	puts(KO_MSG); // �ٹٲ� �ڵ� �߰�

	// 2. putchar() // ���� ����ϱ�
	puts("\nUsing putchar(): ");
	for (int i = 0; i < EN_MSG[i] != '\0'; i++)
		putchar(EN_MSG[i]);

	// 3. putc() // ���� ����ϱ�
	puts("\nUsing putc(): ");
	for (int i = 0; i < EN_MSG[i] != '\0'; i++)
		putc(EN_MSG[i], stdout);

	return 0;
}
