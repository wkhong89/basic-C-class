#define _CRT_SECURE_NO_WARNINGS
#define ROWS 100
#define COLS 100

double get_total_avg(int m[][COLS])
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[0][0];			// p�� 0���� ���� �ּ�
	endp = &m[ROWS-1][COLS-1];	// endp�� (ROWS-1)���� ���� �ּ�

	while( p <= endp )		// p�� ���� �ּҺ��� �۰ų� ������
		sum += *p++;          // sum�� p�� ����Ű�� �� ����

	sum /= ROWS * COLS;		// ��� ���

	return sum;
	
}