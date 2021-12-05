/*
	����13�� ���α׷��� ���� 8
		�� ����ü circle�� �̿��� ���� ������ �ѷ��� ����ϴ� �Լ� �����
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

	printf("���� �߽���: %d %d\n", c1.center.x, c1.center.y);
	printf("���� ������: %.0f\n", c1.radius);
	printf("���� ����=%f, ", area(c1));
	printf("���� �ѷ�=%f", perimeter(c1));
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
