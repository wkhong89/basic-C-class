/*
* ���� 10�� ���α׷��� ���� 6
*	2���� �迭�� ���� ��, ���� ���� ����ϴ� ����
*/

#include <stdio.h>

int main(void)
{
	int arr[3][5] = { {12, 56, 32, 16, 98 },
		{99, 56, 34, 41, 3},
		{65, 3, 87, 78, 21} };
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			sum += arr[i][j];
		printf("%d���� ��: %d\n", i + 1, sum);
		sum = 0;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			sum += arr[j][i];
		printf("%d���� ��: %d\n", i + 1, sum);
		sum = 0;
	}

	return 0;
}