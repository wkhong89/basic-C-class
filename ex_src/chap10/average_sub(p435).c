#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

double get_average(int scores[], int size);	// ��


int main(void)
{
	int scores[STUDENTS] = { 1, 3, 3, 4, 5 };
	double avg;

	avg = get_average(scores, STUDENTS);
	printf("����� %.1f�Դϴ�.\n", avg);

	return 0;
}
// �迭�� ��� �ִ� ������ ����� ����ϴ� �Լ�
double get_average(int scores[], int size)		// ��
{
	int i;
	int sum = 0;


	for(i = 0; i < size; i++)
		sum += scores[i];

	return (double) sum / size;
}
