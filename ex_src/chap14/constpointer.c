#define _CRT_SECURE_NO_WARNINGS
// 다차원 배열과 포인터
#include <stdio.h>

int main(void)
{
	char s[]="Barking dogs seldom bite.";
	char t[]="A bad workman blames his tools";
	const char *p=s;
	char* const q=s;
	
//	p[3]='a';
	p=t;
	q[3]='a';
//	q=t;
	return 0;
}
