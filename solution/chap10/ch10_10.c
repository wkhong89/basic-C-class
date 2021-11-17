/*
* 교재 10장 프로그래밍과제 10
*	vector_add(double x[], double y[], double z[])
*	vector_dot_prod(double x[], double y[])
*/
#include <stdio.h>
void vector_add(double x[], double y[], double z[]);
double vector_dot_prod(double x[], double y[]);

int main(void)
{
	double x[] = { 1.0, 2.0, 3.0 };
	double y[] = { 1.0, 2.0, 3.0 };
	double z[3];

	vector_add(x, y, z);
	printf("벡터의 합 = [ ");
	for (int i=0; i < 3; i++)
		printf("%f ", z[i]);
	printf("]\n");

	printf("벡터의 내적=%f\n", vector_dot_prod(x, y));

	return 0;
}

void vector_add(double x[], double y[], double z[])
{
	for (int i = 0; i < 3; i++)
		z[i] = x[i] + y[i];
}

double vector_dot_prod(double x[], double y[])
{
	double sum = 0;

	for (int i = 0; i < 3; i++)
		sum += x[i] * y[i];

	return sum;
}