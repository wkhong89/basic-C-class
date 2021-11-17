/*
* 교재 10장 프로그래밍과제 2
*   크기가 10인 1차원 배열: 난수 저장
*	최대값과 최소값을 출력하는 프로그램 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int a[], int size);
int get_max(int a[], int size);
int get_min(int a[], int size);

int main(void)
{
	int num_arr[10];

	srand((unsigned)time(NULL));

	fill_array(num_arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d ", num_arr[i]);
	printf("\n");

	printf("배열의 최대값: %d\n", get_max(num_arr, 10));
	printf("배열의 최소값: %d\n", get_min(num_arr, 10));

	return 0;
}

void fill_array(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand();
}

int get_max(int a[], int size)
{
	int max = a[0];

	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}

int get_min(int a[], int size)
{
	int min = a[0];

	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];

	return min;

}