/*
* 'a'+1, 'a'+2, 'a'+3을 문자 형식(%c)로 출력하는 프로그램을 작성하시오.
* 이 프로그램에서 알 수 있는 것은?
*/

#include <stdio.h>

int main(void)
{
	printf("'a'+1 = %c, %d\n", 'a' + 1, 'a' + 1);
	printf("'a'+2 = %c, %d\n", 'a' + 2, 'a' + 2);
	printf("'a'+3 = %c, %d\n", 'a' + 3, 'a' + 3);

	return 0;
}