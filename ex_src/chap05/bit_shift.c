#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 4;   					// 0100  

	printf("��Ʈ << = %#08x\n", x << 1);		// 1000
	printf("��Ʈ >> = %#08x\n", x >> 1);		// 0010

	return 0;
}