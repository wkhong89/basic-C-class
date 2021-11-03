/*
* 교재 8장 프로그래밍 문제 9
* 0 혹은 1을 무작위로 return 하는 b_rand()함수 만들기
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand(void);
int my_rand(int n);

int main(void)
{
	int num;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 5; i++)
		printf("%d ", b_rand());

	printf("정수를 입력하시오 ( 0 < n < %d ): ", RAND_MAX);
	scanf_s("%d", &num);

	for (int i = 0; i <5; i++)
		printf("%d ", my_rand(num));

	return 0;
}

int b_rand(void)
{
	/*
	if (rand() % RAND_MAX <= 0.5)
		return 0;
	else
		return 1;
	*/
	return rand() % 2;
}

int my_rand(int n)
{
	return (rand() % n);
}