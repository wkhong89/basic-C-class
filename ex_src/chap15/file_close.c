#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main( void )
{
	if( remove( "sample.txt" ) == -1 )
		printf( "sample.txt�� ������ �� �����ϴ�.\n" );
	else
      		printf( "sample.txt�� �����Ͽ����ϴ�.\n" );

	return 0;
}
