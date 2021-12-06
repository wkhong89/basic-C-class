/*
	교재 13장 프로그래밍문제 13
		삼각형, 사각형, 원을 동시에 표현하는 공용체 만들기
		현재의 공용체가 표현하는 도형의 종류는 열거형 변수를 이용해 나타낼 것

*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

struct shape {
	int type;
	union {
		struct { int base, height;  } tri;
		struct { int width, height; } rect;
		struct { int radius; } circ ;
	} data;
};

double get_area(struct shape* s);

int main(void)
{
	int type;
	struct shape s;

	printf("도형의 타입을 입력하시오 (0 - tri, 1 - rec, 2 - circ): ");
	scanf("%d", &type);
	s.type = type;

	switch (type) {
	case 0:// triangle
		printf("밑변과 높이의 길이를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		printf("면적은 %f\n", get_area(&s));

		break;
	case 1:// rectangle
		printf("가로와 세로의 길이를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		printf("면적은 %f\n", get_area(&s));
		break;
	case 2: // circle
		printf("반지름의 길이를 입력하시오(예를 들어서 100): ");
		scanf("%d", &s.data.circ.radius);
		printf("면적은 %f\n", get_area(&s));
		break;
	}

	return 0;
}

double get_area(struct shape* s)
{
	double result = 0;

	switch (s->type) {
	case 0:			// triangle
		result = (double) s->data.tri.base * s->data.tri.height / (double)2;
		break;
	case 1:			// rectangle
		result = (double)s->data.rect.width * s->data.rect.height;
		break;
	case 2:			// circle
		result = pow((double)s->data.circ.radius, 2) * M_PI;
		break;
	}

	return result;

}