// ���α׷��� ���� 6.7
// ǥ��, ��ü��, ��ü��
// ǥ�� ü�� = (Ű - 100) * 0.9

#include <stdio.h>

int main(void)
{
	int weight, height;
	double std_weight;

	printf("ü�߰� Ű�� �Է��Ͻÿ�: ");
	scanf("%d %d", &weight, &height);

	std_weight = (height - 100) * 0.9;
	if (weight > std_weight)
		printf("��ü���Դϴ�. \n");
	else if (weight < std_weight)
		printf("��ü���Դϴ�. \n");
	else
		printf("ǥ�� ü���Դϴ�. \n");


	return 0;
}
