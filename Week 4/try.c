// try.c
#include <stdio.h>

#define NAME "Dohwan"
#define VERSION_NUMBER 2.0
#define GAME_ID 0xafed3218
#define PLAYER_LIVES 015

#define ADD_FIVE(i) (i+5)

int main() {
	for (int i = 1; i <= 10; i = ADD_FIVE(i)) {
		printf("(%d)\tMy name is %s!\n", i, NAME);
	}

	return 0;
}
