/*
* int형의 변수 x와 y의 값을 서로 교환하는 프로그램을 작성해 보자.
* 별도의 변수가 필요하면 정의해 사용한다. 
* 변수 x와 y는 10, 20의 값으로 초기화 해라.
* 
* x = 10, y = 20
* x = 20, y = 10
*/
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int tmp;

	printf("swap 전: x = %d, y = %d\n", x, y);

	// swap
	tmp = x;
	x = y;
	y = tmp;

	printf("swap 후: x = %d, y = %d\n", x, y);

	return 0;
}