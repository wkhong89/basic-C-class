/*
	교재12장 프로그래밍과제 11
		문자열을 입력받아서 구성된 단어들을 역순으로 출력하는 프로그램
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	char* array[10];

	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s", str);
	array[0] = strtok(str, " ");
	int i = 1;
	while (array[i] = strtok(NULL, " ")) {
		i++;
	}


	for ( i -= 1; i >= 0; i--) {
		printf("%s ", array[i]);
	}

	return 0;
}