#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LINUX

 
int main(void)
{
#ifdef LINUX
	printf("������ �����Դϴ�. \n");
#else 
	printf("������ �����Դϴ�. \n");
#endif 
       return 0;
}