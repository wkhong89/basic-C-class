// 프로그래밍 과제 6.8
// 놀이공원 요금
// 자유이용권(오후 5시 이전): 1. 대인 - 34,000원, 2. 소인(3~12세/65세 이상) - 25,000원
// 야간이용권(오후 5시 이후): 10,000원

#include <stdio.h>

int main(void)
{
	int cur_time;
	int age, price;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d, %d", &cur_time, &age);

	if (cur_time <= 17) {
		if (age >= 3 && age <= 12 || age >= 65)	// 소인
			price = 25000;
		else
			price = 34000;
	}
	else {
		price = 10000;
	}

	printf("요금은 %d입니다.\n", price);
	return 0;
}