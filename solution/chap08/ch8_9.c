/*
* ���� 8�� ���α׷��� ���� 9
* 0 Ȥ�� 1�� �������� return �ϴ� b_rand()�Լ� �����
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

	printf("������ �Է��Ͻÿ� ( 0 < n < %d ): ", RAND_MAX);
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