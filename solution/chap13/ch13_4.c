/*
	교재13장 프로그래밍문제 4
	복소수 덧셈 함수
		struct complex complex_add(struct complex c1, struct complex c2);
*/
#include <stdio.h>

struct complex {
	double real;
	double img;
};

struct complex complex_add(struct complex *c1, struct complex *c2);

int main(void)
{
	struct complex comp1, comp2 = { 2, 3 };
	struct complex add_result;

	comp1.real = 1;
	comp1.img = 2;

	add_result = complex_add(&comp1, &comp2);

	printf("%f + %fi\n", comp1.real, comp1.img);
	printf("%f + %fi\n", comp2.real, comp2.img);
	printf("%f + %fi\n", add_result.real, add_result.img);

	return 0;
}

struct complex complex_add(struct complex *c1, struct complex *c2)
{
	struct complex result;

	result.real = c1->real + c2->real;
	result.img = c1->img + c2->img;

	return result;
}