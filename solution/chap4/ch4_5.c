/*
* �츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��϶�.
* ���⼭ 1���� 3.3m^2�̴�. �������� �ڷ����� � ���� �����ϴ� ���� ������?
* ��ȣ ����� �̿��Ͽ� 1��� �������͸� ��Ÿ�����
* 
* ���� �Է��ϼ���: 30
* 99.174000�������Դϴ�.
* 
*/

#include <stdio.h>
//#define SMETER_PER_PYONG 3.3058
const double SMETER_PER_PYONG = 3.3058;

int main(void)
{
	int pyong;
	double s_meter;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &pyong);
	s_meter = pyong *  SMETER_PER_PYONG;
	printf("%f�������Դϴ�.\n", s_meter);

	return 0;
}