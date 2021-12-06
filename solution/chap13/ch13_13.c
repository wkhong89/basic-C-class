/*
	���� 13�� ���α׷��ֹ��� 13
		�ﰢ��, �簢��, ���� ���ÿ� ǥ���ϴ� ����ü �����
		������ ����ü�� ǥ���ϴ� ������ ������ ������ ������ �̿��� ��Ÿ�� ��

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

	printf("������ Ÿ���� �Է��Ͻÿ� (0 - tri, 1 - rec, 2 - circ): ");
	scanf("%d", &type);
	s.type = type;

	switch (type) {
	case 0:// triangle
		printf("�غ��� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		printf("������ %f\n", get_area(&s));

		break;
	case 1:// rectangle
		printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		printf("������ %f\n", get_area(&s));
		break;
	case 2: // circle
		printf("�������� ���̸� �Է��Ͻÿ�(���� �� 100): ");
		scanf("%d", &s.data.circ.radius);
		printf("������ %f\n", get_area(&s));
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