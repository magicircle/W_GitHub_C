#include <stdio.h>

int main(void)
{
	int x = 0, nResult = 0;

	//x�� ���� 1 ������Ų �� ����Ѵ�.
	++x;
	printf("%d\n", x);

	//x�� ���� 1 ���ҽ�Ų �� ����Ѵ�.
	x++;
	printf("%d\n", x);

	//x�� ���� 1 ������Ų �� �ܼ� �����Ѵ�. (������ ǥ��)
	nResult = ++x;
	printf("%d, %d\n", nResult, x);

	//x�� ���� nResult�� ������ �� x�� 1 ������Ų��. (������ ǥ��)
	nResult = x--;
	printf("%d, %d\n", nResult, x);
	return 0;
}


