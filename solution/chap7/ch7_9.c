/*
* ���α׷��� ���� 7�� 9��
*  (1+2+3+...+n)�� 10000�� ���� �����鼭 ���� ū ���� 
*	�� ���� n�� ���� ���ϱ�
*/

#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	i = 1;
	while (1) {
		sum += i;
		if (sum > 10000) {
			sum -= i;
			i--;
			break;
		}
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", i, sum);


	return 0;
}