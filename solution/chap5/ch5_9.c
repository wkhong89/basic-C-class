// 프로그래밍 문제 5.9
// 피라미드 높이 재기

#include <stdio.h>

int main(void)
{
	int cane_height;
	double cane_shadow_len, distance_to_pyramid;
	double pyramid_height;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%d", &cane_height);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &cane_shadow_len);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &distance_to_pyramid);

	// 
	pyramid_height = distance_to_pyramid * cane_height / cane_shadow_len;
	printf("피라미드의 높이는 %f입니다.", pyramid_height);

	return 0;
}