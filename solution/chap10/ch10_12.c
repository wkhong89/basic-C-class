/*
*  2차원 행렬 연산 만들기
*		scalar_mult(int a[][3], int scalar)
*		transpose(int a[][3], int b[][3])
*/
#include <stdio.h>

void scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);
void print_mat(int a[][3]);

int main(void)
{
	int a_mat[3][3] = { {1, 2, 3},
		{4, 5, 6},
		{7, 8, 9} };
	int b_mat[3][3];
	int n = 2;

	scalar_mult(a_mat, n);
	print_mat(a_mat);

	transpose(a_mat, b_mat);
	print_mat(b_mat);

	return 0;
}

void scalar_mult(int a[][3], int scalar)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			a[i][j] *= scalar; // a[i][j] = a[i][j] * scalar;
}

void transpose(int a[][3], int b[][3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			b[j][i] = a[i][j];
}

void print_mat(int a[][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
