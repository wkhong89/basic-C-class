// ���α׷��� ���� 5.8
// ���� ǥ������ ü�� ���ϱ�
#include <stdio.h>

const double PI = 3.141592;

int main(void)
{
	double radius;
	double area, volume;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = 4.0 / 3 * PI * radius * radius * radius;
	printf("ǥ������ %f�Դϴ�.\n", area);
	printf("ü���� %f�Դϴ�.\n", volume);

	return 0;
}