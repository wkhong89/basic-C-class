// ���α׷��� ���� 5.9
// �Ƕ�̵� ���� ���

#include <stdio.h>

int main(void)
{
	int cane_height;
	double cane_shadow_len, distance_to_pyramid;
	double pyramid_height;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &cane_height);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &cane_shadow_len);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &distance_to_pyramid);

	// 
	pyramid_height = distance_to_pyramid * cane_height / cane_shadow_len;
	printf("�Ƕ�̵��� ���̴� %f�Դϴ�.", pyramid_height);

	return 0;
}