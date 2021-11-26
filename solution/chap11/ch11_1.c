/*
*	교재 11장 프로그래밍 문제 1
*		리틀엔디언과 빅엔디언
*/
#include <stdio.h>

int main(void)
{
	int x = 0x12345678;
	char* xp = (char*)&x;

	//printf("바이트 순서: %x %x %x %x \n", xp[0], xp[1], xp[2], xp[3]);
	for (int i = 0; i < 4; i++)
		printf("[%p] %x\n", xp + i, *(xp+i));
	return 0;
}
