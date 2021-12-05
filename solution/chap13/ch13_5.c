/*
	교재13 프로그래밍 문제 5
		point 구조체를 받아 두점의 좌표가 일치하면 1, 그렇지 않으면 0을 반환
		int equal(struct point p1, struct point p2);
*/
#include <stdio.h>

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2);
void print(struct point p);

int main(void)
{
	struct point pt1 = { 1, 2 };
	struct point pt2 = { 3, 5 };

	if (equal(pt1, pt2) == 0) {
		print(pt1);
		printf(" != ");
		print(pt2);
		printf("\n");
	}
	else {
		print(pt1);
		printf(" = ");
		print(pt2);
		printf("\n");
	}
	return 0;
}

void print(struct point p)
{
	printf("(%d, %d)", p.x, p.y);
}

int equal(struct point p1, struct point p2)
{
	// insert code here

}
