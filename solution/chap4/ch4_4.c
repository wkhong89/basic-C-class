/*
* ������ ���Ǹ� ���ϴ� ���α׷��� �ۼ��� ����. 
* ���Ǵ� ����*�ʺ�*���̷� ���ȴ�.
* ����, �ʺ�, ���̴� ��� double ���� �Ǽ��� �Է¹޾� ����.
* 
* ������ ����, ����, ���̸� �ѹ��� �Է�: 30 30 30
* ������ ���Ǵ� 27000.00000�Դϴ�.
*/

#include <stdio.h>

int main(void)
{
	double width, depth, height;

	printf("������ ����, ����, ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &width, &depth, &height);
	printf("������ ���Ǵ� %f�Դϴ�.\n", width * depth * height);

	return 0;
}