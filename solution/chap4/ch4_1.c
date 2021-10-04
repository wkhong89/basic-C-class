/* 
 * 사용자로부터 하나의 실수를 입력받아서
 * 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램을 작성하기
 * 
 * 실수를 입력하시오: 89.567
 * 실수형식으로는 89.567000 입니다. 
 * 지수형식으로는 8.9567e+001입니다.
 */
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double var;

	printf("실수를 입력하시오: ");
	scanf("%lf", &var);
	printf("실수 형식으로는 %f 입니다.\n", var);
	printf("지수 형식으로는 %e 입니다.\n", var);

	return 0;
}
