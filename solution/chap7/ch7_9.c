/*
* 프로그래밍 문제 7장 9번
*  (1+2+3+...+n)이 10000을 넘지 않으면서 가장 큰 값과 
*	그 때의 n의 값을 구하기
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

	printf("1부터 %d까지의 합이 %d입니다.\n", i, sum);


	return 0;
}