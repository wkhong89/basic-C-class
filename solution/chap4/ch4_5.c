/*
* 우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하라.
* 여기서 1평은 3.3m^2이다. 변수들의 자료형은 어떤 것은 선택하는 것이 좋은가?
* 기호 상수를 이용하여 1평당 제곱미터를 나타내어라
* 
* 평을 입력하세요: 30
* 99.174000평방미터입니다.
* 
*/

#include <stdio.h>
//#define SMETER_PER_PYONG 3.3058
const double SMETER_PER_PYONG = 3.3058;

int main(void)
{
	int pyong;
	double s_meter;

	printf("평을 입력하세요: ");
	scanf("%d", &pyong);
	s_meter = pyong *  SMETER_PER_PYONG;
	printf("%f평방미터입니다.\n", s_meter);

	return 0;
}