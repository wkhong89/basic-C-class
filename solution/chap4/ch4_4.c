/*
* 상자의 부피를 구하는 프로그램을 작성해 보자. 
* 부피는 길이*너비*높이로 계산된다.
* 길이, 너비, 높이는 모두 double 형의 실수로 입력받아 보자.
* 
* 상자의 가로, 세로, 높이를 한번에 입력: 30 30 30
* 상자의 부피는 27000.00000입니다.
*/

#include <stdio.h>

int main(void)
{
	double width, depth, height;

	printf("상자의 가로, 세로, 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &width, &depth, &height);
	printf("상자의 부피는 %f입니다.\n", width * depth * height);

	return 0;
}