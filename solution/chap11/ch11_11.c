/*
	교재 11장 프로그래밍과제 11
		2개의 정렬된 정수 배열 A[], B[]을 합쳐 하나의 정렬된 배열 C[]로 만드는 함수 작성
		void merge(int *A, int *B, int *C, int size);
*/

#include <stdio.h>
void merge(int *A, int *B, int *C, int size);
void print_arr(int* arr, int size);

int main(void)
{
	int arrA[] = { 2, 5, 7, 8 };
	int arrB[] = { 1, 3, 4, 6 };
	int arrC[8];

	merge(arrA, arrB, arrC, 4);
	printf("A[]= ");
	print_arr(arrA, 4);
	printf("B[]= ");
	print_arr(arrB, 4);
	printf("C[]= ");
	print_arr(arrC, 8);

	
	return 0;
}

void print_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void merge(int* A, int* B, int* C, int size)
{
	int i, j, k;

	for (i = 0, j = 0, k = 0; i < size && j < size; k++) {
		if (A[i] < B[j]) {
			C[k] = A[i];
			i++;
		}
		else if (A[i] > B[j]) {
			C[k] = B[j];
			j++;
		}
		else {	// A[i] == B[j]
			C[k] = A[i];
			i++; j++;
		}
	}

	if (i < size) {
		for (; i < size; i++, k++)
			C[k] = A[i];
	}
	else {
		for (; j < size; j++, k++)
			C[k] = B[j];
	}

}