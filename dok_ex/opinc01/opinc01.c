#include <stdio.h>

int main(void)
{
	int x = 10;

	//1. x�� ����� ���� 1�� ���� �ٽ� x�� �����Ѵ�.
	x = x + 1;
	printf("%d\n", x);

	//2. x�� ����Ǿ� �ִ� ���� 1�� �����Ѵ�.
	x += 1;
	printf("%d\n", x);

	//3. x�� ����� ���� 1���� ��Ų��.
	++x;
	printf("%d\n", x);
	return 0;
}


