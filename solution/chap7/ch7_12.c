/*
* �Ǻ���ġ ���� ���� ��� ���α׷�
*  f0 = 0, f1 = 1, f_(i+1) = f_i + f_(i-1)
* 
*  
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int n;

	a = 0; // f0
	b = 1; // f1

	printf("�� ��° �ױ��� ���ұ��? ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		if (i == 0)
			printf("0");
		else if (i == 1)
			printf("1");
		else {
			c = a + b;
			printf("%d", c);
			a = b;
			b = c;
		}

		if (i < n)
			printf(", ");

	}
	return 0;
}