#include <stdio.h>

int main(void)
{
	//nTmp�� '��ȯ'�� ���� �ʿ��� �����̴�.
	int x = 10, y = 20, nTmp = 0;
	printf("Before: %d, %d\n", x, y);

	//�� ���� x�� y�� ����� ���� ���� ��ȯ�Ѵ�.
	nTmp = x;
	x = y;
	y = nTmp;

	//��ȯ�� �Ϸ�� ���� Ȯ���ϱ� ���� ����Ѵ�.
	printf("After: %d, %d\n", x, y);
	return 0;
}


