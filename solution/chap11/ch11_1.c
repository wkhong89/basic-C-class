/*
*	���� 11�� ���α׷��� ���� 1
*		��Ʋ������ �򿣵��
*/
#include <stdio.h>

int main(void)
{
	int x = 0x12345678;
	char* xp = (char*)&x;

	//printf("����Ʈ ����: %x %x %x %x \n", xp[0], xp[1], xp[2], xp[3]);
	for (int i = 0; i < 4; i++)
		printf("[%p] %x\n", xp + i, *(xp+i));
	return 0;
}
