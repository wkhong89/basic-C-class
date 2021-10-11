// 프로그래밍 문제 6.4
// 컴퓨터와 사용자의 가위, 바위, 보 게임하기

#include <stdio.h>

int main(void)
{
	// 가위: 1, 바위: 2, 보: 3
	int comp, user;

	comp = rand() % 3 + 1;
	printf("선택하시오 (1: 가위, 2: 바위, 3: 보) ");
	scanf("%d", &user);

	if (comp == 1) {
		if (user == 1) printf("비겼습니다.\n");
		else if (user == 2) printf("이겼습니다.\n");
		else printf("졌습니다.\n");
	}
	else if (comp == 2) {
		if (user == 1) printf("졌습니다.\n");
		else if (user == 2) printf("비겼습니다.\n");
		else printf("이겼습니다.\n");
	}
	else {
		if (user == 1) printf("이겼습니다.\n");
		else if (user == 2) printf("졌습니다.\n");
		else printf("비겼습니다.\n");

	}
	
	return 0;
}