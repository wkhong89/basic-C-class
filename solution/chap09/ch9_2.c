/*
*	교재 9장 프로그래밍과제 2번
*		주사위를 던져 몇번 나왔는지 출력하는 프로그램
*		get_dice_face(): 주사위 던지는 함수	
*/

#include <stdio.h>
#include <stdlib.h>

int get_dice_face(void);

int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;

int main(void)
{
	int face_value;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 100; i++) {
		face_value = get_dice_face();
		printf("던진 결과(%d): %d\n", i+1, face_value);

	}

	printf("1 --> %d\n", cnt1);
	printf("2 --> %d\n", cnt2);
	printf("3 --> %d\n", cnt3);
	printf("4 --> %d\n", cnt4);
	printf("5 --> %d\n", cnt5);
	printf("6 --> %d\n", cnt6);

	return 0;
}

int get_dice_face(void)
{
	int face;

	face = rand() % 6 + 1;

	switch (face) {
	case 1: cnt1++; break;
	case 2: cnt2++; break;
	case 3: cnt3++; break;
	case 4: cnt4++; break;
	case 5: cnt5++; break;
	case 6: cnt6++; break;
	}

	return face;
}