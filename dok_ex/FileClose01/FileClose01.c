#include <stdio.h>

void main()
{
	FILE *fp = NULL;
	int nClosed = 0;
	fopen("Test1.txt", "w");
	fopen("Test2.txt", "w");
	fopen("Test3.txt", "w");

	//���ݱ��� ������ ���ϵ��� '���' �ݴ´�. FILE*�� �ʿ����!
	nClosed = _fcloseall();
	printf("%d\n", nClosed);
}

