// ���α׷��� ���� 6.4
// ��ǻ�Ϳ� ������� ����, ����, �� �����ϱ�

#include <stdio.h>

int main(void)
{
	// ����: 1, ����: 2, ��: 3
	int comp, user;

	comp = rand() % 3 + 1;
	printf("�����Ͻÿ� (1: ����, 2: ����, 3: ��) ");
	scanf("%d", &user);

	if (comp == 1) {
		if (user == 1) printf("�����ϴ�.\n");
		else if (user == 2) printf("�̰���ϴ�.\n");
		else printf("�����ϴ�.\n");
	}
	else if (comp == 2) {
		if (user == 1) printf("�����ϴ�.\n");
		else if (user == 2) printf("�����ϴ�.\n");
		else printf("�̰���ϴ�.\n");
	}
	else {
		if (user == 1) printf("�̰���ϴ�.\n");
		else if (user == 2) printf("�����ϴ�.\n");
		else printf("�����ϴ�.\n");

	}
	
	return 0;
}