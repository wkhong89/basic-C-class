// ���α׷��� ���� 6.8
// ���̰��� ���
// �����̿��(���� 5�� ����): 1. ���� - 34,000��, 2. ����(3~12��/65�� �̻�) - 25,000��
// �߰��̿��(���� 5�� ����): 10,000��

#include <stdio.h>

int main(void)
{
	int cur_time;
	int age, price;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d, %d", &cur_time, &age);

	if (cur_time <= 17) {
		if (age >= 3 && age <= 12 || age >= 65)	// ����
			price = 25000;
		else
			price = 34000;
	}
	else {
		price = 10000;
	}

	printf("����� %d�Դϴ�.\n", price);
	return 0;
}