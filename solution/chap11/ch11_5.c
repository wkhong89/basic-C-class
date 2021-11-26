/*
	교재 11장 프로그래밍 문제 5
		평점을 100점 만점으로 변환해 배열 scores[]에 저장하는 함수 작성
		void convert(double *grades, double *scores, int size);
*/
#include <stdio.h>

void convert(double *grades, double *scores, int size);

int main(void)
{
	double class_grades[10] = { 0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double class_scores[10];

	convert(class_grades, class_scores, 10);
	for (int i = 0; i < 10; i++)
		printf("%.2f ", class_grades[i]);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f ", class_scores[i]);

	return 0;
}

void convert(double* grades, double* scores, int size)
{
	for (int i = 0; i < size; i++)
		scores[i] = grades[i] * 100 / 4.3;
}
