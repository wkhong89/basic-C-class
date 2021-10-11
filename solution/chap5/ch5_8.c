// 프로그래밍 문제 5.8
// 구의 표면적과 체적 구하기
#include <stdio.h>

const double PI = 3.141592;

int main(void)
{
	double radius;
	double area, volume;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = 4.0 / 3 * PI * radius * radius * radius;
	printf("표면적은 %f입니다.\n", area);
	printf("체적은 %f입니다.\n", volume);

	return 0;
}