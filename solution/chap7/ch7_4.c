/* 
*	���α׷��� ���� ���� 7�� 4��
*	�ݺ� ������ �̿��� ���� ���
*/
#include <stdio.h>

int main(void)
{
	int i, j;

	i = j = 0;
	while (i < 7) {
		while (j < 7) {
			if (i + j < 6)
				printf(" ");
			else
				printf("*");
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	return 0;
}