// 프로그래밍 문제 5.4
#include <stdio.h>

const double CM_PER_INCH = 2.54;
const int INCH_PER_FEET = 12;

int main(void)
{
	int tall_cm, tall_feet;
	double tall_inch;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &tall_cm);
	tall_inch = tall_cm / CM_PER_INCH;
	//printf("%f\n", tall_inch);
	tall_feet = tall_inch / INCH_PER_FEET;
	//tall_inch = (int)tall_inch % tall_feet;
	tall_inch = tall_inch - tall_feet * INCH_PER_FEET;

	printf("%dcm는 %d피트 %f인치 입니다.\n", tall_cm, tall_feet, tall_inch);

	return 0;
}
