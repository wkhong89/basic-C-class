#define _CRT_SECURE_NO_WARNINGS
// 정수의 제곱을 계산하는 함수 예제
#include <stdio.h>

int square(int n);				

int main(void)
{
	int result;

	result = square(5);		
	printf("%d \n", result);
}


int square(int n)				
{
	return(n * n);
}