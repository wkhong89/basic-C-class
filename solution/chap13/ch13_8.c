/*
	교재13장 프로그래밍 문제 8
		원 구조체 circle을 이용해 원의 면적과 둘레를 계산하는 함수 만들기
		double area(struct circle c);
		double perimeter(struct circle c);
*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

struct point {
	int x, y;
};

struct circle {
	struct point center;
	double radius;
};

typedef struct circle CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);

int main(void)
{
	CIRCLE c1 = { {0, 0}, 10 };

	printf("원의 중심점: %d %d\n", c1.center.x, c1.center.y);
	printf("원의 반지름: %.0f\n", c1.radius);
	printf("원의 면적=%f, ", area(c1));
	printf("원의 둘레=%f", perimeter(c1));
	return 0;
}

double area(CIRCLE c)
{
	return pow(c.radius, 2)* M_PI;
}

double perimeter(CIRCLE c)
{
	return 2 * M_PI * c.radius;

}
