#define _CRT_SECURE_NO_WARNINGS
int get_sum(NODE *plist)
{
	NODE *p;
	int sum = 0;

	p = plist;

	while( p )
	{
		sum += p->data;
		p = p->link;
	} 
	printf("����Ʈ�� �հ�� %d\n", sum);
	return sum;
}