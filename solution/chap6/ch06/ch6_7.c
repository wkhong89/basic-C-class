// 프로그래밍 문제 6.7
// 표준, 저체중, 과체중
// 표준 체중 = (키 - 100) * 0.9

#include <stdio.h>

int main(void)
{
	int weight, height;
	double std_weight;

	printf("체중과 키를 입력하시오: ");
	scanf("%d %d", &weight, &height);

	std_weight = (height - 100) * 0.9;
	if (weight > std_weight)
		printf("과체중입니다. \n");
	else if (weight < std_weight)
		printf("저체중입니다. \n");
	else
		printf("표준 체중입니다. \n");


	return 0;
}
