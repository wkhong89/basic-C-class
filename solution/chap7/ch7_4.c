/* 
*	프로그래밍 문제 교재 7장 4번
*	반복 루프를 이용한 패턴 출력
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