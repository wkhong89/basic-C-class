#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char *p = "HelloWorld";
	printf("%s \n", p);

	p = "Welcome to C World!";	// ����
	printf("%s \n", p);

	p = "Goodbye";			// ����
	printf("%s \n", p);

	// p[0] = 'a';			// ������ �߻��Ѵ�. 

	return 0;
}