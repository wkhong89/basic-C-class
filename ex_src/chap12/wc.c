#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int count_word(char *s);
int main( void )
{
	int wc = count_word("the c book...");
	printf("�ܾ��� ����: %d \n", wc);

	return 0;

}

int count_word (  char * s )
{
	int i, wc = 0, waiting = 1;		

	for( i = 0; s[i] != '\0'; ++i)		// s�� �� ���� ����
		if( isalpha(s[i]) )			// s�� ���ڰ� ���ĺ��̸� 
		{
			if( waiting )		// �ܾ ��ٸ��� ������
			{

				wc++;		// ī���͸� ����
				waiting = 0;	// �ܾ ó���ϴ� �� 
			}
		}
		else				// ���ĺ��� �ƴϸ�
			waiting = 1;		// �ܾ ��ٸ���. 


	return wc;
}