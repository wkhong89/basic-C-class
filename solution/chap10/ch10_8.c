/*
*  ���� 10�� ���α׷��� ���� 8��
*	10���� ���� �Ǽ� �������� ��հ� ǥ������ ���ϱ�
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void fill_array(double a[], int size);
double get_average(double a[], int size);
double get_std_dev(double a[], int size);

int main(void)
{
	double num_arr[SIZE];

	fill_array(num_arr, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%f ", num_arr[i]);
	}
	printf("\n");

	printf("���: %f\n", get_average(num_arr, SIZE));
	printf("ǥ������: %f\n", get_std_dev(num_arr, SIZE));

	return 0;
}

void fill_array(double a[], int size)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < size; i++)
		a[i] = (double) rand();

}

double get_average(double a[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += a[i];

	return sum / size;
}

double get_std_dev(double a[], int size)
{
	double m = get_average(a, size);
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += (a[i] - m) * (a[i] - m);

	return sqrt(sum / size);


}